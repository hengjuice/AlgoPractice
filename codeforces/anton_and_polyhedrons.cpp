#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){
    int n;
    cin >> n;

    map<string, int> M = {
        {"Tetrahedron", 4},
        {"Cube", 6},
        {"Octahedron", 8},
        {"Dodecahedron", 12},
        {"Icosahedron", 20},
    };

    int res = 0;
    while (n--) {
        string temp;
        cin >> temp;
        res += M[temp];
    }
    cout<<res;
    return 0;
}