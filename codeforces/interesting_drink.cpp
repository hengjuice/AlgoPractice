#include <iostream>
#include <numeric>
#include <vector>
#include <algorithm>
#include <queue>
#include <string>
#include <stack>

using namespace std;

int binary_search(int target, vector<int>& arr);

int main(){
    int n;
    cin >> n;

    vector<int> prices;
    for(int i=0; i<n; i++){
        int price;
        cin >> price;
        prices.push_back(price);
    }
    sort(prices.begin(), prices.end());

    int q;
    cin >> q;
    
    for(int i=0; i<q; i++){
        int coin;
        cin >> coin;
        int res = binary_search(coin, prices);
        cout << res << endl;

    }
}

int binary_search(int target, vector<int>& arr){
    // Given a target variable, 
    int left = 0;
    int right = arr.size()-1;
    int res = 0;

    while(left<=right){
        int mid = left + (right-left)/2;
        if(arr[mid] <= target){
            res = mid + 1;
            left = mid + 1;
        }
        else{
            right = mid-1;
        }
    }

    return res;
}