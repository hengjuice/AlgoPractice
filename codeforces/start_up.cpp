#include <iostream>
#include <numeric>
#include <vector>
#include <algorithm>
#include <queue>
#include <string>
#include <stack>
#include <set>

using namespace std;

int main(){
    string s;
    cin >> s;
    
    string symmetric_chars = "AHIMOTUVWXY";
    set<char> symm(begin(symmetric_chars), end(symmetric_chars));

    // Handle empty string
    if(s.empty()){
        cout << "NO" << endl;
        return 0;
    }

    int left = 0;
    int right = s.size() - 1;
    
    while(left <= right){
        // Check if both characters are symmetric and match each other
        if(symm.find(s[left]) == symm.end() || symm.find(s[right]) == symm.end() || s[left] != s[right]){
            cout << "NO" << endl;
            return 0;
        }
        left++;
        right--;
    }
    
    cout << "YES" << endl;
    return 0;
}