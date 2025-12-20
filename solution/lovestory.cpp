#include <iostream>
#include <string>
#include <numeric>
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
    string check = "codeforces";
    string input;
    cin >> input;
    int diff_count = inner_product(check.begin(), check.end(), input.begin(), 0, ::plus<int>(), ::not_equal_to());
    cout << diff_count << endl;
}