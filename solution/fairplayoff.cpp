#include <iostream>
#include <algorithm>
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

void solve (){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int max_left = max(a,b);
    int max_right = max(c,d);
    int min_left = min(a,b);
    int min_right = min(c,d);
    if (max_left > min_right && max_right > min_left) cout << "YES" << endl;
    else cout << "NO" << endl;
}

/*
void solve(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int winner1 = max(a,b);
    int winner2 = max(c,d);
    vector<int> elements = {a,b,c,d};
    sort(elements.begin(), elements.end());
    cout << (min(winner1, winner2) == elements[2] && max(winner1,winner2) == elements[3]) ? "YES" : "NO";
}
*/