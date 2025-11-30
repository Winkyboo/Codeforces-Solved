#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(int argc, char* argv[]){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string a,b,output;
    cin >> a >> b >> output;
    string combined = a + b;
    sort(combined.begin(), combined.end());
    sort(output.begin(), output.end());
    if (combined == output) cout << "YES";
    else cout << "NO";
}