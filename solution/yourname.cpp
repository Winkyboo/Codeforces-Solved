#include <iostream>
#include <string>
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

void solve(){
    int length;
    cin >> length;
    string s, t;
    cin >> s >> t;
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    cout << (s == t ? "YES" : "NO") << endl;
}