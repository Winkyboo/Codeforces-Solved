#include <iostream>
using namespace std;

int main(int argc, char* argv[]){
    int n;
    int count = 0;
    cin >> n;
    
    count += n/100;
    n %= 100;

    count += n/20;
    n %= 20;

    count += n/10;
    n %= 10;

    count += n/5;
    n %= 5;

    count += n;

    cout << count;
    return 0;
}