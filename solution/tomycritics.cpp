#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve();

int main(int argc, char* argvp[]){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    while (n--) solve();
}

void solve(){
    vector<int> input;
    int dig, result;
    for (int i=0; i<3; i++) {
        cin >> dig;
        input.push_back(dig);
    }
    sort(input.rbegin(), input.rend());
    result = input[0] + input[1];
    if (result >= 10) cout << "YES" << endl;
    else cout << "NO" << endl;
}