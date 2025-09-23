#include <iostream>
#include <numeric>
#include <vector>
#include <algorithm>
#include <queue>
#include <unordered_map>

using namespace std;

int main(){
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    /*
    a = Subway ride ticket cost
    b = cost of special ticket
    m = no of trips for special ticket
    n = times needed to use subway
    */

    int only_a_cost = a * m;
    int only_b_cost = b;
    int result = 0;

    if(only_b_cost <= only_a_cost){
        // minimum will be floor(n/m) * b + min(a * (n%m), b)
        int part1 = (n/m) * b;
        int part2 = min(a*(n%m), b);
        result = part1+part2;
    }
    else{
        result = n*a;
    }

    cout << result;
    

}