#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int s, n;
    cin >> s >> n;

    int strength;
    int bonus;

    vector<pair<int, int>> dragons;

    for(int i=0; i<n; i++){
        cin >> strength >> bonus;
        dragons.push_back(pair<int, int>(strength, bonus));
    }

    sort(dragons.begin(), dragons.end());

    bool dies = false;
    for(int i=0; i<dragons.size(); i++){
        if(dragons[i].first >= s){
            dies = true;
            break;
        }
        else{
            s+=dragons[i].second;
        }
    }
    if(dies){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }



    // for(auto p : dragons){
    //     cout<<p.first<<" "<<p.second<<endl;
    // }
}