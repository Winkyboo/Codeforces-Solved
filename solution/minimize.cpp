#include <iostream>
using namespace std;
void solve();

int main(int argc, char* argv[]){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    while (n--) solve();
    return 0;
}

void solve(){
    int a,b,c,result;
    cin >> a >> b;
    if (a <= b) c = a;
    else c = b;
    result = (c-a) + (b-c);
    cout << result << endl;
}