#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve();

int main (int argc, char* argv[]){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    while (n--) solve();
}

void solve () {
    vector<int> input(2);
    cin >> input[0] >> input[1];
    sort(input.begin(), input.end());
    for (auto x : input) cout << x << " ";
    cout << endl;
}