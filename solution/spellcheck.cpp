#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
void solve();

int main(int argc, char* argvp[]){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    while (n--) solve();
    return 0;
}

void solve(){
    int length;
    string input;
    cin >> length;
    cin >> input;
    string target = "Timur";
    if (length == 5){
        sort(input.begin(), input.end());
        sort(target.begin(), target.end());
        if (input == target) cout << "YES" << endl;
        else cout << "NO" << endl;
        return;
    }
    cout << "NO" << endl;
}