#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int main(){
    int n, t;
    cin >> n >> t;
    unsigned long long shortest = pow(10, n - 1);
    unsigned long long longest = pow(10, n) - 1;

    for(unsigned long long int i = shortest; i<longest; i++){
        if(i%t==0){
            cout<<i;
            return 0;
        }
    }

    cout<<-1;
}