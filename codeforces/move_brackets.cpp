#include <iostream>
#include <numeric>
#include <vector>
#include <algorithm>
#include <queue>
#include <string>
#include <stack>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        char open = '(';
        char close = ')';
        int res = 0;
        int bal = 0;

        for(int i=0; i<s.size(); i++){
            if(s[i] == open){
                bal++;
            }
            else{
                bal--;
                if(bal < 0){
                    bal = 0;
                    res++;
                }
            }
        }

        cout << res << endl;


    }
}