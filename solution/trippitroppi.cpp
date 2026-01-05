#include <iostream>
#include <string>
#include <sstream>
#include <limits>
using namespace std;
void solve();

int main (int argc, char* argv[]){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    cin.ignore();
    while (n--) solve();
}

void solve(){
    string input;
    getline(cin, input);
    stringstream ss(input);
    string a,b,c;
    ss >> a >> b >> c;
    cout << a[0] << b[0] << c[0] << endl;
}