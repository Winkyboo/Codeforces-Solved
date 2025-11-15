#include <iostream>
using namespace std;

int main(int argc, char* argv[]){
    long long n;
    long long hasil;
    cin >> n;
    if (n %2 == 0) hasil = n / 2;
    else hasil = -((n +1) / 2);
    cout << hasil;
    return 0;
}