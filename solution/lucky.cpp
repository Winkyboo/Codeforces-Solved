#include <iostream>
#include <string>
#include <sstream>
void sum();
using namespace std;

int main(int argc, char* argv[]){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    for (int i=0; i<t; i++){
        sum();
    }
    return 0;
}

void sum(){
    string input;
    cin >> input;
    stringstream ss(input);
    char digit;
    int sum1 = 0;
    int sum2 = 0;
    for (int i = 0; i<3; i++){
        ss >> digit;
        sum1 += (digit - '0');
    }
    for (int i = 0; i<3; i++){
        ss >> digit;
        sum2 += (digit - '0');
    }
    if (sum1 == sum2) cout << "YES" << endl;
    else cout << "NO" << endl;
}