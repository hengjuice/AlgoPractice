#include <iostream>
#include <set>
#include <vector>
#include <string>
#include <map>

using namespace std;

int main(){
    int n;
    cin >> n;

    map<pair<int, int>, int> times;

    int cashiers = 0;

    while(n--){
        int h, m;
        cin >> h >> m;
        
        pair<int, int> timestamp(h, m);
        
        times[timestamp] ++;
        cashiers = max(times[timestamp], cashiers);
    }

    cout << cashiers;
}