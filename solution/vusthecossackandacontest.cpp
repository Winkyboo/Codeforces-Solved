#include <iostream>
using namespace std;

int main (int argc, char* argv[]){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, k;
    cin >> n >> m >> k;
    if (m >= n && k >= n) cout << "Yes";
    else cout << "No";
    return 0;
}