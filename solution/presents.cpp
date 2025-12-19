#include <iostream>
#include <vector>
using namespace std;
void solve();

int main(int argc, char* argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}

void solve() {
    int n;
    cin >> n;
    vector<int> result(n + 1);
    for(int i = 1; i <= n; i++){
        int receiver;
        cin >> receiver;
        result[receiver] = i;
    }
    for(int i = 1; i <= n; i++){
        cout << result[i] << " ";
    }
    cout << endl;
}