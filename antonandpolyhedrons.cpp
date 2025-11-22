#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[]){
    int n;
    cin >> n;
    int count = 0;
    string input;
    for(int i=0;i<n;i++){
        cin >> input;
        if (input == "Tetrahedron") count += 4;
        else if (input == "Cube") count += 6;
        else if (input == "Octahedron") count += 8;
        else if (input == "Dodecahedron") count += 12;
        else if (input == "Icosahedron") count += 20;
    }

    cout << count;
    return 0;
}