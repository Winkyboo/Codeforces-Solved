#include <iostream>
using namespace std;
void solve();

int main(int argc, char* argv[]){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}

void solve(){
    int n;
    cin >> n;
    int a,b;
    int mishka = 0;
    int chris = 0;
    int draw = 0;
    for (int i = 0; i < n; i++){
        cin >> a >> b;
        if (a < b) chris++;
        else if (a > b) mishka++;
        else draw++;
    }
    if (mishka > chris) cout << "Mishka" << endl;
    else if (chris > mishka) cout << "Chris" << endl;
    else if (chris == mishka) cout << "Friendship is magic!^^" << endl;
}