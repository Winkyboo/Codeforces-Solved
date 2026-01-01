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
    int a_count = 0;
    int b_count = 0;
    cin >> input;
    for (auto x : input){
        if (x == 'A') a_count++;
        else b_count++;
    }
    cout << (a_count > b_count ? "A" : "B") << endl;
}