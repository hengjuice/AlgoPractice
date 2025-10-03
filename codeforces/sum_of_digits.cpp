#include <iostream>
#include <numeric>
#include <vector>
#include <algorithm>
#include <queue>
#include <string>
#include <stack>
#include <cstdlib>

#define charToInt(c) (c-'0')

using namespace std;

int main(){
    string n;
    cin >> n;
    int res = 0;

    while(n.size() > 1){
        int sum = 0;
        for(int i=0; i<n.size(); i++){
            sum += charToInt(n[i]);
        }
        n = to_string(sum);
        res++;
    }

    cout << res << endl;
    
}