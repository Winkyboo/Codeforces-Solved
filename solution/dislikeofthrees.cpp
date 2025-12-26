#include <iostream>
using namespace std;
void solve();

int main(int argc, char* argv[]){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    while (n--) solve();
}

void solve(){
    int input;
    int count = 0;
    int check = 1;
    cin >> input;
    while(true){
        if (check % 3 != 0 && check % 10 != 3) count++;
        if (count == input){
            cout << check << endl;
            break;
        }
        check++;
    }
}