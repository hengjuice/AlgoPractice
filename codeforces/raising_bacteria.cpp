#include <iostream>
#include <string>
#include <vector>
#include <bitset>

using namespace std;

int main(){
    int x;
    cin >> x;
    string binaryString = std::bitset<32>(x).to_string();

    int res=0;

    for(char c: binaryString){
        if(c=='1') res++;
    }

    cout << res;
}