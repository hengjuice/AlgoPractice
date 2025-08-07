#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <algorithm>
#include <cctype>

using namespace std;

int main() {
    string first;
    string second;
    
    cin >> first;
    cin >> second;

    transform(first.begin(), first.end(), first.begin(), [](unsigned char c){return tolower(c);});
    transform(second.begin(), second.end(), second.begin(), [](unsigned char c){return tolower(c);});

    // vector<int> ar1(first.begin(), first.end());
    // vector<int> ar2(second.begin(), second.end());

    // int a = accumulate(ar1.begin(), ar1.end(), 0);
    // int b = accumulate(ar2.begin(), ar2.end(), 0);

    // int result = (a > b) ? 1 : ((a < b) ? -1 : 0);

    // cout<<result;

    int result = (first > second) ? 1: ((first<second) ? -1 : 0);

    cout << result;

}