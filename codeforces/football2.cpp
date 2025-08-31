#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    map<string, int> x;

    for(int i=0; i<n; i++){
        string team;
        cin >> team;
        x[team]++;
    }

    map<string,int>::iterator best = std::max_element(x.begin(),x.end(),[] (const std::pair<string,int>& a, const std::pair<string,int>& b)->bool{ return a.second < b.second; } );
    std::cout << best->first; // << " , " << best->second << "\n";


}