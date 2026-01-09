#include <iostream>
#include <string>
#include <algorithm>
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

void solve(){
    string input;
    cin >> input;
    reverse(input.begin(), input.end());
    int length = input.size();
    for (auto& x : input){
        if (x == 'p') x = 'q';
        else if (x == 'q') x = 'p';
    }
    cout << input << endl;
}