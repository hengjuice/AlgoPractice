#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;
/*

Two languages, you write down words whichever is shorter, if equal then use the first word

*/

int main(){
    int n, m;
    cin >> n >> m;

    unordered_map<string, string> translation;

    for(int i=0; i<m; i++){
        string w1, w2;
        cin >> w1 >> w2;

        if(w1.size() <= w2.size()){
            translation[w1] = w1;
        }
        else{
            translation[w1] = w2;
        }
    }

    // for(auto p : translation){
    //     cout << p.first << ":" << p.second<< endl;
    // }

    for(int i=0; i<n; i++){
        string word;
        cin >> word;
        cout << translation[word] << " ";
    }

}