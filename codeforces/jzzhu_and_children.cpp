#include <iostream>
#include <queue>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    queue<pair<int, int>>q;

    for(int i=0; i<n; i++){
        int candies;
        cin>> candies;
        q.push({i+1, candies});
    }

    int lastChild=0;

    while(!q.empty()){
        auto current = q.front();
        q.pop();
        if(current.second<=m){
            lastChild = current.first;
        }
        else{
            current.second -= m;
            q.push({current.first, current.second});
        }
    }

    cout << lastChild;

}