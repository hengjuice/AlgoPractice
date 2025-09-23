#include <iostream>
#include <numeric>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr;
        while(n--){
            int a;
            cin >> a;
            arr.push_back(a);
        }
        long long sum = 0;
        int mx = 0, ans = 0;
        for(int i=0; i<arr.size(); i++){
            sum += arr[i];
            mx = max(mx, arr[i]);
            if(sum - mx == mx){
                ans++;
            }
        }
        cout << ans << endl;

    }
}