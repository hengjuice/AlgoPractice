#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

/*
To check if number n is a T-prime
- n must be a perfect square
- square root of n must be a prime number

Since x_i can be up to 1e18, sqrt(x_i) can be up to ~1e9.
To test whether a number up to 1e9 is prime, we only ever need to
trial-divide by primes up to sqrt(1e9) ~ 31623. So we sieve that
small range ONCE up front, then reuse the prime list for every query.
*/

const int LIMIT = 31623; // ceil(sqrt(1e9))
vector<int> primes;

void sieve(){
    vector<bool> isComposite(LIMIT+1, false);
    for(int i=2; i<=LIMIT; i++){
        if(!isComposite[i]){
            primes.push_back(i);
            for(long long j = (long long)i*i; j<=LIMIT; j+=i){
                isComposite[j] = true;
            }
        }
    }
}

bool isPrime(long long num){
    if(num<2) return false;
    for(int p : primes){
        if((long long)p*p > num) break;
        if(num % p == 0) return false;
    }
    return true;
}

// integer sqrt with correction for floating-point rounding
long long isqrt(long long num){
    long long r = (long long)sqrtl((long double)num);
    while(r*r > num) r--;
    while((r+1)*(r+1) <= num) r++;
    return r;
}

bool is_t_prime(long long num){
    if(num<4) return false;
    long long r = isqrt(num);
    if(r*r != num) return false; // not a perfect square
    return isPrime(r);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sieve();

    int n;
    cin >> n;
    while(n--){
        long long num;
        cin >> num;
        cout << (is_t_prime(num) ? "YES" : "NO") << "\n";
    }
    return 0;
}
