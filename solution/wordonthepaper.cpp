#include <iostream>
#include <string>
using namespace std;
void solve();

int main (int argc, char* argv[]){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    while (n--) solve();
    return 0;
}

void solve (){
    string result = "";
    string words;
    for (int i = 0; i < 8; i++){
        cin >> words;
        for (auto x : words) {
            if (x != '.') result += x;
        }
    }
    cout << result << endl;
}