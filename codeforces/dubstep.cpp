#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Function to trim leading whitespace
std::string ltrim(const std::string& s) {
    size_t start = s.find_first_not_of(" \t\n\r\f\v");
    return (start == std::string::npos) ? "" : s.substr(start);
}

// Function to trim trailing whitespace
std::string rtrim(const std::string& s) {
    size_t end = s.find_last_not_of(" \t\n\r\f\v");
    return (end == std::string::npos) ? "" : s.substr(0, end + 1);
}

// Function to trim both leading and trailing whitespace
std::string trim(const std::string& s) {
    return ltrim(rtrim(s));
}

int main(){
    string mainString;
    cin >> mainString;

    string oldSubstring = "WUB";
    string newSubstring = " ";

    size_t pos = 0;
    while((pos = mainString.find(oldSubstring, pos)) != string::npos){
        mainString.replace(pos, oldSubstring.length(), newSubstring);
        pos += newSubstring.length();
    }

    cout << trim(mainString) << endl;
}