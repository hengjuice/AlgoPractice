#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    string players;
    cin >> players;

    if (players.empty()){
        cout << "NO" << endl;
        return 0;
    }

    int longest = 1;

    for(int i=1; i<players.size(); i++){
        
        if(players[i] == players[i-1]){
            longest++;
        }
        else{
            longest=1;
        }

        if (longest >= 7){
            break;
        }
    }

    if (longest >= 7){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}