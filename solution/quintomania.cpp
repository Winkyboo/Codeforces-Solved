#include <iostream>
#include <cmath>
#include <vector>
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
    int n;
    cin >> n;
    vector<int> melody(n);
    for (int i = 0; i < n; i++) cin >> melody[i];
    bool check = true;
    for (int i = 0; i < n-1; i++){
        int diff = abs(melody[i] - melody[i+1]);
        if (diff != 5 && diff != 7){
            check = false;
            break;
        }
    }
    cout << (check ? "YES" : "NO") << endl;
}