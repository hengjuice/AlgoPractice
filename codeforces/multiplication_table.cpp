#include <iostream>

using namespace std;

typedef long long ll;

int main(){
    ll n, x;
    cin >> n >> x;

    int count = 0;

    for(ll i=1; i*i<=x; i++){
        if(x%i == 0){
            long long j = x/i;

            if(i <= n && j <= n){
                if(i==j){
                    count+=1;
                }
                else{
                    count+=2;
                }
            }
        }
    }

    cout << count << endl;
}