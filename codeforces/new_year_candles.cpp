#include <iostream>
#include <vector>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    int hours = a;
    int quotient = a/b;
    int remainder;
    int dividend = a;
    int divisor = b;

    while(quotient>0){
        quotient = dividend / divisor; // 24
        remainder = dividend % divisor; // 3
        
        hours += quotient; // 27

        dividend = quotient + remainder;
    }

    cout << hours;
}