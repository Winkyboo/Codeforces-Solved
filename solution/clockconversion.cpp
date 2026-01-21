#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
void solve();

int main (int argc, char* argv[]){
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}

void solve (){
    int a,b;
    scanf("%d:%d", &a, &b);
    const char* time = (a < 12 ? "AM" : "PM");           
    a = (a % 12 == 0 ? 12 : a % 12); 
    printf("%02d:%02d %s\n", a, b, time);      
}