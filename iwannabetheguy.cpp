#include <iostream>
#include <set>
using namespace std;

int main(int argc, char* argv[]){
    int n, p, q, input;
    set<int> levels;
    cin >> n;
    cin >> p;
    for (int i=0; i<p; i++){
        cin >> input;
        levels.insert(input);
    }
    cin >> q;
    for (int i=0; i<q; i++){
        cin >> input;
        levels.insert(input);
    }
    if (levels.size() == n) cout << "I become the guy.";
    else cout << "Oh, my keyboard!";
    return 0;
}