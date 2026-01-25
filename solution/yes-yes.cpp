#include <iostream>
#include <string>
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

void solve(){
    string input;
    cin >> input;
    string check = "";
    for (int i = 0; i< 20; i++) check += "Yes";
    cout << (check.find(input) != string::npos ? "YES" : "NO") << endl;
}