#include <iostream>
using namespace std;
void solve();

int main(int argc, char* arg[]){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    while (n--) solve();
}

void solve(){
    int input;
    cin >> input;
    if (input >= 1900) cout << "Division 1" << endl;
    else if (input >= 1600 && input <= 1899) cout << "Division 2" << endl;
    else if (input >= 1400 && input <= 1599) cout << "Division 3" << endl;
    else cout << "Division 4" << endl;
}