#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> input(n); 
    for (int i = 0; i < n; i++) {
        cin >> input[i];
    }

    int count = 0;
    int max_pos = 0;
    int max_val = input[0];
    for(int i = 1; i < n; i++){
        if(input[i] > max_val){ 
            max_val = input[i];
            max_pos = i;
        }
    }
    while(max_pos > 0){
        swap(input[max_pos], input[max_pos-1]);
        max_pos--;
        count++;
    }
    int min_pos = 0;
    int min_val = input[0];
    for(int i = 1; i < n; i++){
        if(input[i] <= min_val){ 
            min_val = input[i];
            min_pos = i;
        }
    }
    while(min_pos < n - 1){
        swap(input[min_pos], input[min_pos+1]);
        min_pos++;
        count++;
    }
    cout << count << endl;

    return 0;
}