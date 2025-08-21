#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <numeric>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> gifts_received(n, 0);
    int gift;

    for(int i=0; i<n; i++){
        cin >> gift;
        // gifts_received = {0,0,0,0}
        gifts_received[gift-1] = i+1;
    }

    for(auto i : gifts_received){
        cout << i << " ";
    }


}