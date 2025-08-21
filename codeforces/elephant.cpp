#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    int x, steps=0;
    cin >> x;

    while(x>0){
        if(x<=4){
            x = 0;
            steps++;
        }
        else{
            x -= 5;
            steps++;
        }
    }
    cout<<steps;
}