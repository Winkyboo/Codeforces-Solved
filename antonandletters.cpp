#include <iostream>
#include <string>
#include <set>
using namespace std;

int main(int argc, char* argv[]){
    string input;
    getline(cin, input);
    set<char> distinct;
    for (char c:input){
        if(c >= 'a' && c <= 'z') distinct.insert(c);
    }
    cout << distinct.size();
    return 0;
}