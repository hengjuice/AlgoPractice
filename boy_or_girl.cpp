#include <iostream>
#include <vector>
#include <unordered_set>
#include <string>

using namespace std;

int main(){
    string username;
    cin >> username;

    unordered_set<char> unique_char(username.begin(), username.end());

    if (unique_char.size() %2==0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
}