#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int length;
    string input;
    
    cin >> length;
    cin >> input;
    
    vector<char> arr(input.begin(), input.end());
    
    int l = 0, r = 1;
    int res = 0;
    
    for(int i=1; i<arr.size(); i++){
        if(arr[i]==arr[i-1]){
            res++;
        }
    }
    
    cout<<res;
    
}