#include <iostream>
#include <numeric>
#include <vector>
#include <algorithm>
#include <queue>
#include <string>
#include <stack>

#define charToInt(c)(c-'0')

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;

        int ones = 0;
        int zeroes = 0;

        for(int i=0; i<s.size(); i++){
            if(charToInt(s[i])) ones++;
            else zeroes++;
        }

        int i;
        for(i=0; i<s.size(); i++){
            if(charToInt(s[i])){
                if(zeroes>0) zeroes--;
                else break;
            }
            else{
                if(ones>0) ones--;
                else break;
            }
        }

        cout << s.size()-i << endl;

        
    }
}