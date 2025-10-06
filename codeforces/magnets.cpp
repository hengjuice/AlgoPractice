#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    cin >> n;
    int res = 1;
    
    char lastChar = '\0';

    while(n--){
        string magnet;
        cin >> magnet;
        
        if(lastChar && magnet[0] == lastChar){
            res++;
        }

        lastChar = magnet[1];
    }

    cout << res;
}