#include <iostream>
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
    int n,m;
    cin >> n >> m;
    if (n < m){
        cout << "No" << endl;
        return;
    }
    if (n >= m){
        int remnant = n - m;
        cout << (remnant % 2 == 0 ? "Yes" : "No") << endl;
    }
}