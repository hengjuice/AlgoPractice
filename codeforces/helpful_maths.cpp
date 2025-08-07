#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <sstream>

using namespace std;

int main() {
    string op;
    cin >> op;
    string delimiter = "+";

    vector<string> parts;
    stringstream ss(op);
    string token;

    while(getline(ss, token, delimiter[0])) {
        if(!token.empty()) {
            parts.push_back(token);
        }
    }

    sort(parts.begin(), parts.end());

    cout<<parts[0];

    for(int i=1; i<parts.size(); i++){
        cout<<"+"<<parts[i];
    }

}