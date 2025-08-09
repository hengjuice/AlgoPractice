#include <iostream>
#include <string>
#include <vector>
#include <algorithm> // For std::transform
#include <cctype>    // For std::tolower

using namespace std;

int isVowel(char ch){
    string str = "aeiouy";
    return (str.find(ch) != string::npos);
}

int main(){
    string program;
    cin>>program;

    // put to lower case
    transform(program.begin(), program.end(), program.begin(), [](unsigned char c){return tolower(c);});

    for(int i=0; i<program.size(); i++){
        if(isVowel(program[i])){
            //cout<<"";
            continue;
        }
        else{
            cout<<"."<<program[i];
        }

    }
}