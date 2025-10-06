#include <iostream>
#include <string>

using namespace std;

int main(){
    string x, y;
    cin >> x >> y;
    string s = "";
    for(int i=0; i<x.size(); i++){
        if(x[i] == y[i]){
            s.push_back('0');
        }
        else{
            s.push_back('1');
        }
    }

    cout << s;
    
}