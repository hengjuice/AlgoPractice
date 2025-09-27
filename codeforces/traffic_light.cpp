#include <iostream>
#include <numeric>
#include <vector>
#include <algorithm>
#include <queue>
#include <string>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n; 
        char c;
        cin >> n;
        cin >> c;
        
        string s;
        cin >> s;
        s = s + s; // duplicate to handle circularity

        int res = 0;
        int last_green = -1;

        // Traverse from the end to find the closest green on the right
        for(int i = s.size() - 1; i >= 0; i--){
            if(s[i] == 'g'){
                last_green = i;
            }
            if(i < n && s[i] == c){ // Only consider original string positions
                if(last_green != -1){
                    res = max(res, last_green - i);
                }
            }
        }

        cout << res << endl;
    }
    return 0;
}