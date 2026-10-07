#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr;
    int odd_count = 0;
    int odd_idx = 0;
    int even_idx = 0;
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        if(temp%2){
            odd_count++;
            odd_idx = i;
        }
        else{
            even_idx = i;
        }
        arr.push_back(temp);
    }

    if(odd_count>arr.size()-odd_count){
        cout << even_idx+1;
    }
    else{
        cout << odd_idx+1;
    }

    return 0;

}