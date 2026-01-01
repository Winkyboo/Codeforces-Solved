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
}

void solve(){
    string input;
    cin >> input;
    int length = input.size();
    int mid = length / 2;
    if (length % 2 != 0) cout << "NO" << endl;
    else{
        string left = input.substr(0, mid);
        string right = input.substr(mid);
        cout << (left == right ? "YES" : "NO") << endl;
    }
}