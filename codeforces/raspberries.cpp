#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        // k can take values (2,3,4,5)
        vector<int> arr(n);
        /*
        For each test case:
        Compute candidate = min over i of: (k - a[i] % k) % k   [make one element divisible by k]
        
        If k == 4:
            Also compute: cost to make any element divisible by 2 = (2 - a[i] % 2) % 2
            Sort these costs, take the two smallest, sum them
            candidate = min(candidate, sum_of_two_cheapest)
        
        Answer = candidate
        */
        for(int i=0; i<n; i++) cin >> arr[i];
        
        int ans = INT_MAX;
        for(int i=0; i<n; i++){
            ans = min(ans, (k-arr[i] % k) % k);
        }
        if(k==4){
            vector<int> costs;
            for(int i=0; i<n; i++){
                costs.push_back(arr[i] % 2);
            }
            sort(costs.begin(), costs.end());
            ans = min(ans, costs[0] + costs[1]);
        }

        cout << ans << endl;
    }
    return 0;
}