#include <iostream>
using namespace std;

int main(int argc, char* argv[]){
    int n, levels, minimum, maximum;
    cin >> n;
    int input[n];
    for (int i=0; i<n; i++){
        cin >> input[i];
    }
    for (int i=0; i<n-1; i++){
        if (input[i] < input[i+1]) minimum = input[i];
    }
    cout << minimum;
    return 0;
}