#include <iostream>
#include <set>
#include <vector>
#include <string>

using namespace std;

bool checkPerfectSquare(long long N);

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long no_of_squares = 0;
        for(long long i=0; i<n; i++){
            long long squares;
            cin >> squares;
            no_of_squares += squares;
        }
        
        bool perfect = checkPerfectSquare(no_of_squares);
        if(perfect){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    
}

bool checkPerfectSquare(long long N) {
    if (N < 0) return false;
    long long left = 1, right = N;
    while (left <= right) {
        long long mid = left + (right - left) / 2;
        // Check for overflow safely
        if (mid > N / mid) {
            right = mid - 1;
        } else {
            if (mid * mid == N) return true;
            left = mid + 1;
        }
    }
    return false;
}
