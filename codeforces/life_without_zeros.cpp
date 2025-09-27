#include <iostream>
#include <numeric>
#include <vector>
#include <algorithm>
#include <queue>
#include <string>

using namespace std;

string removeCharacter(string s, char charToRemove){
    s.erase(remove(s.begin(), s.end(), charToRemove), s.end());
    return s;
}

int main(){
    int a, b;
    cin >> a >> b;

    int c = a + b;
    char charToErase = '0';

    string str_a = removeCharacter(to_string(a), charToErase);
    string str_b = removeCharacter(to_string(b), charToErase);
    string str_c = removeCharacter(to_string(c), charToErase);

    int new_a = stoi(str_a);
    int new_b = stoi(str_b);
    int new_c = stoi(str_c);

    if (new_a + new_b == new_c){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;

}