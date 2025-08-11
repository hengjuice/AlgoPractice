#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

bool containsOnlyFourOrSeven(int n) {
    if (n == 0) { // Handle the case for zero
        return false;
    }
    
    std::string s = std::to_string(n);
    for (char c : s) {
        if (c != '4' && c != '7') {
            return false; // Found a digit that isn't 4 or 7
        }
    }
    return true; // All digits were either 4 or 7
}

int main(){
    string input;
    
    cin >> input;

    vector<char> arr = {'4', '7'};

    unordered_set<char> four_seven = {'4', '7'};

    unordered_set<char> charSet(input.begin(), input.end());

    if (four_seven == charSet){
        cout<<"YES";
        return 0;
    }
    
    // Generate all "lucky numbers"
    vector<int> result;
    for (int i = 1; i <= 1000; ++i) {
        if (containsOnlyFourOrSeven(i)) {
            result.push_back(i);
        }
    }

    // next check if it's divisible by the lucky numbers
    int number = stoi(input);
    int i = 0;
    while(i<result.size() && number>=result[i]){
        if(number%result[i] == 0){
            cout <<"YES";
            return 0;
        }
        i++;
    }

    cout<<"NO";


}