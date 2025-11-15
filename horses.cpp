#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char* argv[]){
    unsigned long n;
    unsigned long temp =0;
    vector<unsigned long> input (4);
    for (int i = 0; i < 4; i++) cin >> input[i];
    for (int i = 0; i<4; i++){
        for (int j = i+1; j <4; j++){
            if (input[i] == input[j]){
                temp++;
                break;
            } 
        }
    }
    cout << temp;
    return 0;
}