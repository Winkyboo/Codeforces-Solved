#include <iostream>
#include <algorithm>
using namespace std;
void solve();

int main(int argc, char* argv[]){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}

void solve(){
    int a,b,c,result;
    cin >> a >> b >> c;
    result = max({a,b,c}) - min({a,b,c});
    cout << result;
}