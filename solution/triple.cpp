#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve();

int main (int argc, char* argv[]){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    while (n--) solve();
    return 0;
}

void solve (){
    int length;
    cin >> length;
    vector<int> input(length);
    for (int i = 0; i < length; i++) cin >> input[i];
    sort(input.begin(), input.end());
    for (int i = 0; i < length - 2; i++){
        if (input[i] == input[i+2]){
            cout << input[i] << endl;
            return;
        }
    }
    cout << -1 << endl;
}