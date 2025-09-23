#include <iostream>
#include <numeric>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    queue<pair<int, int>> days;

    for(int i=1; i<=7; i++){
        int pages;
        cin >> pages;
        days.push({i, pages});
    }

    int lastDay = 0; 

    while(n>0){
        auto current = days.front();
        days.pop();
        
        n-=current.second;

        lastDay = current.first;

        days.push({current.first, current.second});
    }

    cout << lastDay;

}