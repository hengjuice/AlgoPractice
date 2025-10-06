#include <iostream>
#include <string>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        // logic
        int res = a%b;
        if(res!=0){
            res = b-a%b;
        }
        cout << res << endl;
    }
}