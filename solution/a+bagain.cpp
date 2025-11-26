#include <iostream>
#include <string>
#include <sstream>
void sum();
using namespace std;

int main(int argc, char* argv[]){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    for (int i=0;i<n;i++){
        sum();
    }
    return 0;
}

void sum(){
    string input;
    cin >> input;
    stringstream ss(input);
    int count = 0;
    for (char c:input){
        count += (c - '0');
    }
    cout << count << endl;
}