#include <iostream>
#include <vector>
using namespace std;
void solved();

int main(int argc, char* argv[]){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    for (int i=0; i<n; i++){
        solved();
    }
    return 0;
}

void solved(){
    int input, common;
    cin >> input;
    vector<int> a(input);
    for (int i=0; i<input; i++) cin >> a[i];
    if (a[0] == a[2]) common = a[0];
    else if(a[0] == a[2]) common = a[0];
    else common = a[1];
    for (int i=0; i<input; i++){
        if (a[i] != common) {
            cout << i+1 << endl;
            return;
        }
    }
}