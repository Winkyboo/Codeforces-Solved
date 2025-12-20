#include <iostream>
#include <string>
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
    string input;
    cin >> input;
    int count = 0;
    string check = "abc";
    for (int i = 0; i < input.size(); i ++){
        if (input[i] != check[i]) count++;
    }
    if (count == 0 || count == 2) cout << "YES" << endl;
    else cout << "NO" << endl;
}