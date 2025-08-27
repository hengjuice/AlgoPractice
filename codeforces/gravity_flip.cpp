#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> blocks;
    int block;
    for(int i=0; i<n; i++){
        cin >> block;
        blocks.push_back(block);
    }
    sort(blocks.begin(), blocks.end());
    for(auto b : blocks){
        cout << b << " ";
    }
}