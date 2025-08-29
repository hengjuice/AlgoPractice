#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;

    vector<int> things;

    for(int i = 0; i<m; i++){
        int thing;
        cin >> thing;
        things.push_back(thing); // to make it 0 index
    }

    int curr = 1;
    int time = 0;

    for(int thing : things){
        if(curr != thing){
            if(thing < curr){
                time = time + (n-curr) + thing;
            }
            else{
                time+=(thing-curr);
            }
            curr = thing;
        }
    }
    //cout<<""<<endl;
    cout<<time;
}