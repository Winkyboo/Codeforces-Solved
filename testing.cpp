#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main(int argc, char* argv[]){
    set<int> input;
    input.insert(10);
    input.insert(20);
    input.insert(10);
    input.insert(5);
    for (int x : input) cout << x << endl;
    return 0;
}