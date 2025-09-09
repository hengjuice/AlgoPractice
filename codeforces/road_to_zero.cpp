#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;

    int min_cost;
    
    while(t--){
        long long int x, y, a, b;
        cin >> x >> y >> a >> b;

        if(x<y){
            int temp = x;
            x = y;
            y = temp;
        }

        // if 2 single operations is cheaper than 1 double operation

        if(a+a <= b){
            cout << (x+y) * a<<endl;;
        }
        else{
            cout << b*y + (x-y) * a<<endl;
        }
    }
    
    


}