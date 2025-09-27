#include <iostream>
#include <numeric>
#include <vector>
#include <algorithm>
#include <queue>
#include <unordered_map>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    int moves = 0;

    /*
    transform n to m
    multiply by 2 or multiply by 3
    */
    

    if(m%n!=0){
        cout << -1 << endl;
        return 0;
    }
    
    int d = m/n;

    while(d%2==0){
        d/=2;
        moves++;
    }

    while(d%3==0){
        d/=3;
        moves++;
    }

    if(d!=1){
        cout << -1 << endl;
        return 0;
    }
    else{
        cout << moves;
        return 0;
    }


    

}