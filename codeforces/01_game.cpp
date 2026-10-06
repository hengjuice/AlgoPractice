#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        // player must choose two different adjacent characters of a string s and delete them
        
        // if there is an even number of pairs, Alice cannot win
        // if there is an odd number of pairs, Alica can win
        string s;
        cin >> s;
        map<int, int> freq{{'1', 0}, {'0', 0}};
        for(char c: s){
            freq[c]++;
        }
        int no_of_pairs = min(freq['1'], freq['0']);

        if(no_of_pairs%2==0) cout << "NET\n";
        else cout << "DA\n";
    }
    return 0;
}