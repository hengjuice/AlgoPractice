#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        
        int n;
        cin >> n;

        // combination of 2020s and 2021s.
        // 2021s is just 2020 + 1
        
        if(n<2020){
            cout << "NO\n";
            continue;
        }

        int x = n/2020;
        int ones = (n - x * 2020);
        if(ones>x){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
        }


        // // check if number smaller
        // if(n<2020) {
        //     cout << "NO\n";
        //     continue;
        // }

        // int ones = n % 10;
        // if(ones == 0){
        //     if(n%2021==0) cout << "YES\n";
        //     else if (n%2020==0) cout << "YES\n";
        //     else cout << "NO\n";
        // }
        // else{
        //     int remainder = n-(ones*2021);

        //     // example 4022, ones = 2
        //     // remainder = 4022 - 2*2021 = 0
        //     // 
        //     if(remainder < 0) cout 
        //     if(remainder%2021==0) cout << "YES\n";
        //     else if (remainder%2020==0) cout << "YES\n";
        //     else cout << "NO\n";
        // }
    }
    // it's basically I need to get the 
    
    return 0;
}