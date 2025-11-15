#include <iostream>
using namespace std;

int main(int argc, char* argv[]){
    int input, a, b;
    cin >> input;
    for (int i=0; i<input; i++){
        cin >> a >> b;
        int sisa = a % b;
        int hasil;
        if (sisa == 0) hasil = 0;
        else hasil = b - sisa;
        cout << hasil << endl;
    }
    
    return 0;
}

/*
int input, a, b;
    cin >> input;
    for (int i=0; i<input; i++){
        cin >> a >> b;
        int hasil = (b - (a % b) ) % b;
        cout << hasil << endl;
    }
    
    return 0;
*/