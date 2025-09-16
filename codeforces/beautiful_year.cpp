#include <iostream>
#include <set>
#include <string>

using namespace std;

int main(){
    int y;
    cin >> y;

    int res = y+1;

    while(true){
        string year = to_string(res);
        
        set<char> char_set;

        bool unique = true;

        for (char c : year) {
            if (char_set.count(c)) { // If character already in set
                unique = false;
                break;
            }
            char_set.insert(c);
        }

        if(unique){
            cout << stoi(year);
            break;
        }

        res++;
    }
    
}