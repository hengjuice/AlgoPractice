#include <vector>
#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int max_idx = 0;
    int curr_max = 0;
    int min_idx = 0;
    int curr_min = 101;

    vector<int> arr;
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    // go from right
    for(int i=0; i<n; i++){
        if(arr[i] > curr_max){
            curr_max = arr[i];
            max_idx = i; // this will ensure that the smaller index is kept for duplicate maximums to minimise swaps
        }
    }

    for(int i=n-1; i>-1; i--){
        if(arr[i] < curr_min){
            curr_min = arr[i];
            min_idx = i;
        }
    }
    if(max_idx < min_idx){
        cout << (max_idx - 0) + (n-1-min_idx);
    }
    else{
        cout << (max_idx - 0) + (n-1-min_idx) - 1;
    }
    
}