#include <iostream>
#include <vector>

using namespace std;

int main() {
    int no_of_lines;
    
    int x = 0;

    string s;

    scanf("%d", &no_of_lines);

    for(int i=0; i <= no_of_lines; i++) {
        getline(cin, s);

        if (s.find ('+') != string::npos) {
            x++;
        }
        else if (s.find('-') != string::npos) {
            x--;
        }
        else {
            continue;
        }
    }

    printf("%d", x);
}