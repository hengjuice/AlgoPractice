#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// referencing https://stackoverflow.com/questions/65896295/finding-odd-divisors-with-bit-shifting

int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        long long int n;
        cin >> n;

        // check if n has odd divisor
        while(!(n & 1)){
            n >>= 1;
        }

        if(n==1){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }


}