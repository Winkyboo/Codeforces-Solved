#include <iostream>
using namespace std;
void solve();

int main(int argc, char* argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}

void solve() {
    int n;
    cin >> n;

    int height = 0;
    int current_level = 1;      
    int cubes_needed = 0;       

    while (true) {
        cubes_needed = cubes_needed + current_level;

        if (n >= cubes_needed) {
            n = n - cubes_needed; 
            height++;             
            current_level++;     
        } else {
            break; 
        }
    }

    cout << height << endl;
}