#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
/*
If the number consists of other primes than 2
 and 3
 then the answer is -1. 
 
 Otherwise, let cnt2 be the number of twos in the factorization of n
 and cnt3 be the number of threes in the factorization of n
. If cnt2>cnt3
 then the answer is -1 because we can't get rid of all twos. Otherwise, the answer is (cnt3−cnt2)+cnt3
*/

int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int number;
        cin >> number;
        int count2=0, count3=0;

        while(number%2==0){
            number/=2;
            count2++;
        }

        while(number%3==0){
            number/=3;
            count3++;
        }

        if(number==1 && count2<=count3){
            cout << 2 * count3 - count2 << endl;
        }
        else{
            cout<<-1<<endl;
        }
    }



}