#include <iostream>
#include <set>
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

void solve() {
    set<int> input;
    int num, size;
    cin >> size;
    for (int i = 0; i < size; i++){
        cin >> num;
        input.insert(num);
    }
    cout << (input.size() == size ? "YES" : "NO") << endl;
}