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

void solve(){
    int x,a,b;
    cin >> x;
    int max = 0;
    int count = 0;
    for (int i = 1; i <= x; i++){
        cin >> a >> b;
        if (a <= 10){
            if (b > max) {
                max = b;
                count = i;
            }
        }
    }

    cout << count << endl;
}