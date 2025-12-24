#include <iostream>
#include <set>
#include <vector>
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
    int total_input,inputs;
    cin >> total_input;
    set<int> arr;
    for(int i=0; i<total_input; i++){
        cin >> inputs;
        arr.insert(inputs);
    }
    vector<int> setcopy(arr.begin(), arr.end());
    for (int i = 0; i + 1 < setcopy.size(); i++){
        if (setcopy[i+1] - setcopy[i] > 1) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}
/*
the cleaner way:
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);

    for(int i=0; i<n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    for (int i = 0; i + 1 < n; i++) {
        if (a[i+1] - a[i] > 1) {
            cout << "NO" << endl;
            return; 
        }
    }
    
    cout << "YES" << endl;
}
*/