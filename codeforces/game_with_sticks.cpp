#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    int sticks = n + m;
    int intersections = n * m;

    bool akshat = false;

    while(n>0 && m>0 && intersections>0){
        n--;
        m--;
        intersections = n*m;
        akshat = !akshat;
    }

    if(akshat){
        cout<<"Akshat";
    }
    else{
        cout<<"Malvika";
    }

}