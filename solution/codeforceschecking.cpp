#include <iostream>
#include <string>
using namespace std;
void solve();

int main(int argc, char* argv[]){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    while (n--) solve();
    return 0;
}

void solve(){
    char input;
    bool found = false;
    string check = "codeforces";
    cin >> input;
    for (char c : check) {
        if (c == input) {
            found = true;
            break;
        }
    }
    if (found) cout << "YES" << endl;
    else cout << "NO" << endl;
}