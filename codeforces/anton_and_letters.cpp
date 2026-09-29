#include <unordered_set>
#include <string>
#include <iostream>
#include <cctype>

using namespace std;

int main(){
    string s;
    getline(cin, s);
    unordered_set<char> D;
    for(char c: s){
        //cout<<c<<" ";
        if(islower(static_cast<unsigned char>(c))) D.insert(c);
    }
    //cout << endl;
    cout << D.size();
    return 0;
}