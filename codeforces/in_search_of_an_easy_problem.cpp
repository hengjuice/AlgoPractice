#include <iostream>
#include <numeric>
#include <vector>
#include <algorithm>
#include <queue>
#include <string>
#include <stack>

using namespace std;

int main(){
    int n;
    cin >> n;

    while(n--){
        int difficulty;
        cin >> difficulty;
        if(difficulty==1){
            cout << "HARD" << endl;
            return 0;
        }
    }
    cout << "EASY" << endl;
}