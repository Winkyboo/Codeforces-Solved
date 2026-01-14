#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
void solve();

int main (int argc, char* argv[]){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}

void solve (){
    string input;
    cin >> input;
    char curr = 'a';
    int count = 0;
    for (auto x : input){
        char target = x;
        int diff = abs(curr-target);
        count += min(diff, 26 - diff);
        curr = target;
    }
    cout << count << endl;
}