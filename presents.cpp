#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[]){
    int n, giver;
    cin >> n;
    vector<int> receiver (n);
    for (int i = 0; i < n; i++){
        cin >> giver;
        receiver[giver] = i;
    }
    for (int i = 0; i < n; i++){
        cout << receiver[i] << " ";
    }
    return 0;
}