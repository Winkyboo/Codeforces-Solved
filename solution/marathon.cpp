#include <iostream>
#include <vector>
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
    int a, b;
    int count = 0;
    vector<int> input;
    cin >> a;
    for (int i = 0; i < 3; i++){
        cin >> b;
        input.push_back(b);
    }
    for (auto x : input){
        if (a < x) count++;
    }
    cout << count << endl;
}   