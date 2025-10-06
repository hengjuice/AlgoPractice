#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    cin >> n;

    string hate = " that I hate";
    string love = " that I love";
    string res = "I hate ";

    for(int i=1; i<n; i++){
        if(i%2==0){
            res.append(hate);
            
        }
        else{
            res.append(love);
        }
    }

    res.append(" it");

    cout << res;
    
}