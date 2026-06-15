#include <iostream>
#include <bit>
#include <cmath>

using namespace std;

int integer_sqrt(int n) {
    return static_cast<int>(std::sqrt(n));
}

int main(){
    long n;
    cin >> n;
    /*
    
    */
    long long result = pow(2, n/2);
    if(n%2==0){
        cout << result;
    }
    else{
        cout << 0;
    }

    return 0;
}