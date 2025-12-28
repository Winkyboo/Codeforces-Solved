#include <iostream>
#include <algorithm>
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
    int a, elements;
    int curr_streak = 0;
    int max_streak = 0;
    cin >> a;
    for (int i = 0; i < a; i++){
        cin >> elements;
        if (elements == 0){
            curr_streak++;
            max_streak = max(max_streak, curr_streak);
        }else curr_streak = 0;
    }
    cout << max_streak << endl;
}