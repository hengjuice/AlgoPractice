#include <iostream>
#include <numeric>
#include <vector>
#include <algorithm>
#include <queue>
#include <string>
#include <unordered_map>
#include <cctype>

using namespace std;

int main(){
    int n;
    cin >> n;
    if(n<26){
        cout << "NO";
        return 0;
    }
    
    string s;
    cin >> s;
    unordered_map<char, int> freq;

    for(int i=0; i<n; i++){
        // check if upper or lower
        freq[tolower(s[i])]+=1;
    }
    if(freq.size() != 26){
        cout << "NO";
    }
    else cout << "YES";

    return 0;
}