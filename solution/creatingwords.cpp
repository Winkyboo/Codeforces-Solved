#include <iostream>
#include <string>
#include <utility>
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
    string s1, s2;
    cin >> s1 >> s2;
    swap(s1[0], s2[0]);
    cout << s1 << " " << s2 << endl;
}