#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    unsigned long long int n, k;
    cin >> n >> k;

    // if n is odd, there will be n-1/2 even numbers and n-1/2 + 1 odd numbers
    // if n is even, there will be equal even and odd numbers

    unsigned long long int num_odd;
    if (n % 2 == 1) {
        num_odd = (n / 2) + 1;
    } else {
        num_odd = n / 2;
    }

    if (k <= num_odd) {
        // Find the k-th odd number
        // Odd numbers are of the form 2*i - 1
        cout << (2 * k) - 1 << endl;
    } else {
        // Find the (k - num_odd)-th even number
        // Even numbers are of the form 2*i
        k -= num_odd;
        cout << 2 * k << endl;
    }

    return 0;
}