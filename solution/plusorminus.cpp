#include <iostream>
using namespace std;
void solve();

int main(int argc, char* arg[]){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    while (n--) solve();
    return 0;
}

void solve (){
    int a,b,c;
    cin >> a >> b >> c;
    if(a + b == c) cout << "+" << endl;
    else cout << "-" << endl;
}