#include <iostream>
#include <set>
#include <string>
#include <cctype>
using namespace std;

int main(int argc, char* argv[]){
    int length;
    cin >> length;
    set<char> letters;
    string words;
    cin >> words;
    for (char w : words){
        letters.insert(tolower(w));
    }
    if (letters.size() < 26) cout << "NO";
    else cout << "YES";
    return 0;
}