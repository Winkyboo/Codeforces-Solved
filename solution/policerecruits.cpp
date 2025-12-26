#include <iostream>
#include <vector>
using namespace std;
void solve();

int main(int argc, char* argv[]){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, input;
    int police_avail = 0;
    int crime = 0;
    if (cin >> n){
        for(int i = 0; i < n; i++){
            cin >> input;
            if(input == -1){
                if(police_avail > 0) police_avail--;
                else crime++;
            }
            else police_avail += input;
        }  
        cout << crime << endl;
    }   
    return 0;
}