#include <iostream>
#include <map>

using namespace std;

int main(){
    int n;
    cin >> n;
    int c1 = 0, c2=0, c3=0;
    int taxis = 0;

    while(n--){
        int temp;
        cin >> temp;
        switch(temp){
            case 1:
                c1++;
                break;
            case 2:
                c2++;
                break;
            case 3:
                c3++;
                break;
            case 4:
                taxis++;
                break;
        }
    }

    taxis+=c3;
    c1 -= c3;
    if(c1<0) c1=0;
    
    taxis+=c2/2;
    if(c2%2==1){
        taxis++;
        c1-=2;
        if(c1<0)c1=0;
    }
    taxis+=(c1+3)/4;
    cout << taxis;
}