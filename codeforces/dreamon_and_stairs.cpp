#include <iostream>
#include <vector>
#include <string>

using namespace std;

/*
Maximum number of moves is n
Minimum number of moves is n/2

Problem is: determine the minimal integer that is a multiple of m in the range [n/2, n]

We can get the minimum integer through ceil(x/m) * m
Compare the result to the maximum (n) to determine if it's within range.
*/

int main(){
    int n, m;
    cin >> n >> m;
    
    int lower_bound = (n+1)/2;
    int solution = ((lower_bound+m-1)/m) * m;

    if (solution>n){
        solution = -1;
    }
    
    cout << solution;
}