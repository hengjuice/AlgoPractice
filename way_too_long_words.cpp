#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {

    vector<string> words;
    string s;
    int no_of_lines;

    scanf("%d", &no_of_lines);
    
    for(int j = 0; j<=no_of_lines; j++) {
        getline(cin, s);
        words.push_back(s);
    }
    
    for (const std::string& s : words) {
        if (s.size() > 10) {
            printf("%c%d%c \n", s.front(), s.size() - 2, s.back());
        }
        else {
            std::cout << s << std::endl;
        }
        
    }

}