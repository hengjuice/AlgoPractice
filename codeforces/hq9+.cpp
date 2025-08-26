#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

int main(){
    string p;
    cin >> p;
    
    unordered_set<char> chars = {'H', 'Q', '9'};
    bool output = false;
    for(char c: p){
        if(chars.find(c) != chars.end()){
            output = true;
            break;
        }
    }

    if(output){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}