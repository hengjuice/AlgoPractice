#include <iostream>
#include <vector>
#include <string>
 
using namespace std;
 
// 3, 6, 9, 12 = 30
 
int main(){
    int k, n, w;
    int total_cost = 0;
    
    cin >> k >> n >> w;
    
    for(int i=1; i<=w; i++){
        // cout << i*k << endl;
        total_cost+=(i*k);
    }
    // cout<<total_cost<<endl;
    int amt = total_cost - n < 0 ? 0 : total_cost - n;
    cout << amt;
}