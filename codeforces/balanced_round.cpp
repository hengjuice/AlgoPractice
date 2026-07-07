#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int t; 
    cin >> t;
    while(t--){
        int n, k;
        // number of problems, and maximum allowed absolute difference between consecutive problems
        cin >> n >> k;
        vector<int> problems(n);
        for(int i=0; i<n; i++){
            cin >> problems[i];
        }
        sort(problems.begin(), problems.end());
        /* Problem converts to finding the largest subarray for which a_i - a_{i-1} <= k */
        int max_length = 0;
        int current_length = 1;
        for (int i = 1; i < n; i++) {
            if (problems[i] - problems[i - 1] <= k) {
                current_length++;
                max_length = max(max_length, current_length);
            } else {
                current_length = 1;
            }
        }
        max_length = max(max_length, current_length);
        cout << n - max_length << endl;
    }

    return 0;
}