#include <iostream>
#include <string>
using namespace std;

int main(){
    char direction;
    cin >> direction;

    string sequence;
    cin >> sequence;

    string row1 = "qwertyuiop";
    string row2 = "asdfghjkl;";
    string row3 = "zxcvbnm,./";

    for (char c : sequence) {
        if (direction == 'R') {
            if (row1.find(c) != string::npos) {
                cout << row1[row1.find(c) - 1];
            } else if (row2.find(c) != string::npos) {
                cout << row2[row2.find(c) - 1];
            } else if (row3.find(c) != string::npos) {
                cout << row3[row3.find(c) - 1];
            }
        } else if (direction == 'L') {
            if (row1.find(c) != string::npos) {
                cout << row1[row1.find(c) + 1];
            } else if (row2.find(c) != string::npos) {
                cout << row2[row2.find(c) + 1];
            } else if (row3.find(c) != string::npos) {
                cout << row3[row3.find(c) + 1];
            }
        }
    }
    return 0;
}