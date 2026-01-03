#include <iostream>
#include <string>
#include <sstream>
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
    cin >> input;
    int a,b;
    char addition;
    stringstream ss (input);
    ss >> a >> addition >> b;
    cout << a+b << endl;
}