#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argvp[]){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    char input;
    while (cin >> input){
        if (input == '.') cout << "0";
        else{
            cin >> input;
            cout << (input == '.' ? 1 : 2);
        }
    }
    return 0;
}