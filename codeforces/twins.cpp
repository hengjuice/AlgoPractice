#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <functional>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> coins;
    int coin;

    for(int i=0; i<n; i++){
        cin >> coin;
        coins.push_back(coin);
    }

    sort(coins.begin(), coins.end(), greater<int>());

    int total_sum = accumulate(coins.begin(), coins.end(), 0);
    int first_sum = 0;
    int i=0;

    for(; i<coins.size(); i++){
        if(first_sum > total_sum) break;
        first_sum+=coins[i];
        total_sum-=coins[i];
    }

    cout << i;

    return 0;
    
}