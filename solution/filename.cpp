#include <iostream>
#include <string>
using namespace std;

int main (int argc, char* argv[]){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    string input;
    string check = "xxx";
    int count = 0;
    cin >> input;
    for (int i = 0; i < n; i++){
        if(input.find(check) == string::npos) break;
        else{
            int pos = input.find(check);
            input.erase(pos, 1);
            count++;
        }
    }
    cout << count << endl;
    return 0;
}