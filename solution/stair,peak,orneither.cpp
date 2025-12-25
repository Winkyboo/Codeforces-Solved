#include <iostream>
using namespace std;
void solve();

int main(int argc,char* argv[]){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    while(n--) solve();
    return 0;
}

void solve(){
    int a,b,c;
    cin >> a >> b >> c;
    if(a < b && b < c) cout << "STAIR" << endl;
    else if(a < b && b > c) cout << "PEAK" << endl;
    else cout << "NONE" << endl;
}