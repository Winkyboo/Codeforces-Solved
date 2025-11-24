#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]){
    int n, input;
    int sum= 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> input;
        sum += input;
    }
    double hasil = (double) sum/n;
    cout << fixed << setprecision(12) << hasil;
    return 0;
}