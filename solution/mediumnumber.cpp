#include <iostream>
#include <algorithm>
using namespace std;
void solve();

int main (int argc, char* argv[]){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    for (int i=0; i<n; i++) solve();
    return 0;
}

void solve(){
    int a,b,c,medium;
    cin >> a >> b >> c;
    int maks = max({a, b, c});
    int minimum = min({a,b,c});
    if (a != maks && a != minimum) medium = a;
    else if (b != maks && b != minimum) medium =b;
    else medium = c;
    cout << medium << endl;
}