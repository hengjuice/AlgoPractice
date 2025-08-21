#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <numeric>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<double> volumes;
    double vol;

    for(int i=0; i<n; i++){
        cin >> vol;
        volumes.push_back(vol);
    }
    double total = accumulate(volumes.begin(), volumes.end(), 0);

    double result = total/n;

    cout<<result;

}