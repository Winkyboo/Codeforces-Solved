#include <iostream>
using namespace std;

int main (int argc, char* argv[]){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int count = 0;
    for (int i = 1; i <= n/2; i++) if (n % i == 0) count++;
    cout << count << endl;
    return 0;
}