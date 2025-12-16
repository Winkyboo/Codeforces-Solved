#include <iostream>
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
    int input;
    cin >> input;
    input = (input-1)/2;
    cout << input << endl;
}