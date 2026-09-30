#include <vector>
#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main(){
    int n;
    cin >> n;
    unordered_map<string,int> M;
    while(n--){
        string name;
        cin >> name;
        if(M.contains(name)){
            //M[name]++;
            //name+=M[name];
            cout << name << M[name]++ << endl;
        }
        else{
            M[name]++;
            cout << "OK" <<endl;
        }
    }
    return 0;
}