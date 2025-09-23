#include <iostream>
#include <numeric>
#include <vector>
#include <algorithm>
#include <queue>
#include <unordered_map>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;

        string input;
        cin >> input;

        int left = 0;
        int right = 0;
        int result = k;
        
        unordered_map<char, int> freq;
        
        for(right=0; right<k; right++){
            freq[input[right]]++;
        }

        result = min(result, freq['W']);
        
    
        while(right<n){
            // delete left
            freq[input[left]]--;
            left++;

            // add right
            freq[input[right]]++;
            right++;

            // update result
            result = min(freq['W'], result);
        }

        cout << result << endl;


    }

}