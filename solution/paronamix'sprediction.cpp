#include <iostream>
using namespace std;
bool isPrime(int num);
void solve();

int main(int argc, char* argv[]){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}

bool isPrime (int num){
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++){
        if (num % i == 0) return false;
    }
    return true;
}

void solve(){
    int n,m;
    cin >> n >> m;
    int prime_next = n + 1;
    while (!(isPrime(prime_next))) prime_next++;
    cout << (prime_next == m ? "YES" : "NO") << endl;
}