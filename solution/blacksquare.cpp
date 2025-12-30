#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(int argc, char* argv[]){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> arr(5);
    cin >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    long long total = 0;
    string input;
    cin >> input;
    for (auto x : input){
        int index = x - '0';
        total += arr[index];
    }
    cout << total << endl;
    return 0;
}