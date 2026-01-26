#include <iostream>
#include <vector>
#include <algorithm>
#include <climits> 
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
    int length;
    cin >> length;
    vector<int> arr(length);
    for (int i = 0; i < length; i++) cin >> arr[i];
    sort(arr.begin(), arr.end());
    int min_diff = INT_MAX; 
    for (int i = 0; i < length - 1; i++) {
        int current_diff = arr[i+1] - arr[i];
        if (current_diff < min_diff) min_diff = current_diff;
    }
    cout << min_diff << endl;
}