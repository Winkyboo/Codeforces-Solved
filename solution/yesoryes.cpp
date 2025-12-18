#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
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
    transform(input.begin(), input.end(), input.begin(), ::tolower);
    if (input == "yes") cout << "YES" << endl;
    else cout << "NO" << endl;
}