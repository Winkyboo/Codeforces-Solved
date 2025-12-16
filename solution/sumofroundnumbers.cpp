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
    return 0;
}

void solve(){
    int input, digit;
    cin >> input;
    vector<int> ans;
    int multiplier = 1;

    while(input > 0){
        digit = input%10;
        if(digit > 0) ans.push_back(digit * multiplier);
        input /= 10;
        multiplier *= 10;
    }

    cout << ans.size() << endl;
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}