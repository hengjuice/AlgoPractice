#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
length of the side equals n squares, n is an odd number
each unit square continas some small letter of the English alphabet

need to check if the letters form the letter x

1. on both diagonals, the letters must be the same
2. all other squares of the paper contain the same letter that is different from the letters on the diagonal

My Gameplan
Check the diagonal letter.

*/

int main(){
    int n;
    cin >> n;

    vector<vector<char>> grid(n, vector<char>(n));
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> grid[i][j];
        }
    }

    char diag = grid[0][0];
    char other = grid[0][1];

    if (diag == other) {
        cout << "NO\n";
        return 0;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j || i + j == n - 1) {
                if (grid[i][j] != diag) {
                    cout << "NO\n";
                    return 0;
                }
            } else {
                if (grid[i][j] != other) {
                    cout << "NO\n";
                    return 0;
                }
            }
        }
    }

    cout << "YES\n";
    return 0;
}