#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> puzzles;
    for(int i=0; i<m; i++){
        int puzzle;
        cin >> puzzle;
        puzzles.push_back(puzzle);
    }

    sort(puzzles.begin(), puzzles.end());

    if(n==m){
        cout << puzzles[n-1] - puzzles[0];
        return 0;
    }
    
    int res=-1;
    int i = 0;

    while(i+n-1<m){
        int first = puzzles[i];
        int last = puzzles[i+n-1];
        int diff = last - first;

        res = res < 0? diff : min(res, diff);
        i++;
    }

    cout << res;

    
}