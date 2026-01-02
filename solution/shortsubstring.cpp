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
    string output;
    cin >> output;
    string input = "";
    input += output[0];
    for (int i = 1; i < output.size(); i+=2) input += output[i];
    cout << input << endl;
}