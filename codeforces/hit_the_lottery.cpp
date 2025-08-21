#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> denom = {1,5,10,20,100};
    int times = 0;

    auto it = upper_bound(denom.begin(), denom.end(), n);

    while(n!=0){
        it = upper_bound(denom.begin(), denom.end(), n);
        if (it != denom.begin()) {
            int result = *std::prev(it);
            n-=result;
            times++;
        }
    }

    cout << times;
}