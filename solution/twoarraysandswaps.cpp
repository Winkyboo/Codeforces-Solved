#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
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
    int n,k;
    cin >> n >> k;
    vector<int> arr_a(n);
    vector<int> arr_b(n);
    for (int i = 0; i < n; i++) cin >> arr_a[i];
    for (int i = 0; i < n; i++) cin >> arr_b[i];

    sort(arr_a.begin(), arr_a.end());
    sort(arr_b.rbegin(), arr_b.rend());
    for (int i = 0; i < k && i < n; i++){
        if (arr_a[i] < arr_b[i]) swap(arr_a[i], arr_b[i]); 
        else break;
    }

    long long total = accumulate(arr_a.begin(), arr_a.end(), 0LL);
    cout << total << endl;
}