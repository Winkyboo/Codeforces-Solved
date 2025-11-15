#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(int argc, char* argv[]){
    int line, t;
    cin >> line >> t;
    string input;
    cin >> input;
    while (t--){
        for (int i = 0; i<line-1 ; i++){
            if (input[i] == 'B' && input[i+1] == 'G'){
                swap(input[i], input[i+1]);
                i++;
            }
        }
    }
    cout << input;
    return 0;
}