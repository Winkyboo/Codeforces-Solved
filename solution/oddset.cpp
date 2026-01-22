#include <iostream>
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
    int l;
    cin >> l;
    int length = 2*l;
    int odd = 0;
    int even = 0;
    for (int i = 0; i < length; i++){
        int input;
        cin >> input;
        if (input % 2 == 0) even++;
        else odd++;
    }
    cout << (even == odd ? "Yes" : "No") << endl;
}