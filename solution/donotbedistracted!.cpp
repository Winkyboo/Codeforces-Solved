#include <iostream>
#include <string>
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
    string input;
    cin >> input;
    vector<bool> check(26, false);
    bool suspicious = false;
    for (int i = 0; i < n; i++){
        int curr_idx = input[i] - 'A';
        if (i == 0 || input[i] != input[i-1]){
            if (check[curr_idx]){
                suspicious = true;
                break;
            }
            check[curr_idx] = true;
        }
    }

    cout << (suspicious ? "NO" : "YES") << endl;
}