#include <iostream>
#include <set>
using namespace std;
void solve();

int main (int argc, char* argv[]){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}

void solve (){
    int n;
    cin >> n;
    set<int> input;
    for (int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        input.insert(temp);
    }
    cout << input.size() << endl;
}