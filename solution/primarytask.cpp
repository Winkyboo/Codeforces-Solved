#include <iostream>
#include <string>
using namespace std;
void solve ();

int main (int argc, char* argv[]){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}

void solve(){
    string input;
    cin >> input;
    if (input.size() < 3){
        cout << "NO" << endl;
        return;
    }

    if (input[2] == '0'){
        cout << "NO" << endl;
        return;
    }
    
    if (input[0] != '1' || input[1] != '0'){
        cout << "NO" << endl;
        return;
    }
    string check = input.substr(2);
    int num = stoi(check);
    cout << (num < 2 ? "NO" : "YES") << endl;
}