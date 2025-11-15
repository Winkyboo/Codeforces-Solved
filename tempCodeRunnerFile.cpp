#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    string input;
    string test1;
    cin >> input >> test1;
    int len = input.length();
    for (int i = 0; i < len; i++){
        if (input[i] == test1[i]) input[i] = '0';
        else input[i] = '1';
    }
    for (char c: input){
        cout << c;
    }
    return 0;
}