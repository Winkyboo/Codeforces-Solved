#include <iostream>
using namespace std;
void sum();

int main(int argc, char* argv[]){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    if (cin >> n){
        while (n--){
            sum();
        }
    }
    return 0;
}

void sum(){
    int a,b,c;
    cin >> a >> b >> c;
    if (a + b == c || a + c == b || b + c == a) cout << "YES" << endl;
    else cout << "NO" << endl;
}