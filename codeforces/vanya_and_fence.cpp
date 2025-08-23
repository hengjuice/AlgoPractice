#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int h;

    cin >> n;
    cin >> h;

    vector<int> heights;
    int height;

    int width = 0;

    for(int i=0; i<n; i++){
        cin >> height;
        // heights.push_back(height);
        if (height > h){
            width++;
        }
        width++;
    }

    cout << width;

    
}