#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> arr;

    for(int i=0; i<n; i++){
        int element;
        cin >> element;
        arr.push_back(element);
    }

    // if(arr.size()==1) return 0;

    int res = 1;
    int inc = 1;

    for(int i=1; i<arr.size(); i++){
        if(arr[i]>=arr[i-1]){
            inc++;
        }
        else{
            inc = 1;
        }
        res = max(inc, res);
    }

    cout << res;
}