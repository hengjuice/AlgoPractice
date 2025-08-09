#include <iostream>
#include <string>
#include <cctype> // Required for toupper() and tolower()
using namespace std;

int main(){
    string word;
    cin >> word;
    word[0] = static_cast<char>(std::toupper(static_cast<unsigned char>(word[0])));

    cout << word;
}