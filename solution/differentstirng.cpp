#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
void solve();

int main (int argc, char* argv[]){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}

void solve (){
    string input;
    cin >> input;
        for (int i = 1; i < input.size(); i ++){
            if (input[0] != input[i]) {
                swap(input[0], input[i]);
                cout << "YES" << endl;
                cout << input << endl;
                return;
            }
        }
        cout << "NO" << endl;
}