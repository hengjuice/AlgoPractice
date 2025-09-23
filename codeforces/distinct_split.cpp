#include <iostream>
#include <set>
#include <vector>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

int distinct_chars(std::string &s);

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        // Brute Force way is too loop through the characters
        int res = 0;

        map<char, int> left, right;
        for(char c: s){
            right[c]++;
        }

        for(int i=0; i<n; i++){
            left[s[i]]++;
            if(right[s[i]] == 1){
                right.erase(s[i]);
            }
            else{
                right[s[i]]--;
            }
            int sum = left.size() + right.size();
            res = max(sum, res);
        }

        // for(int i=1; i<=n; i++){
        //     string s1 = s.substr(0, 0+i);
        //     string s2 = s.substr(0+i, n-i);
        //     int sum = distinct_chars(s1)+distinct_chars(s2);
        //     res = max(sum, res);
        // }
        cout << res << endl;
    }
}

int distinct_chars(std::string& s){
    set<char> S(s.begin(), s.end());
    return S.size();
}