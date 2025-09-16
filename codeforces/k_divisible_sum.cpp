#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n, k;
        cin >> n >> k;
        long long cf = (n+k-1)/k;
        long s = cf * k;
        cout << (cf * k + n - 1)/n << endl;
    }
}