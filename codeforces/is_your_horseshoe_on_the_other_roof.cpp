#include <iostream>
#include <set>

using namespace std;

int main(){
    set<int> S;
    for(int i=0; i<4; i++){
        int n;
        cin >> n;
        S.insert(n);
    }

    cout << 4-S.size();
    

}