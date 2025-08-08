#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    int no_of_lines;
    cin >> no_of_lines;
    
    int x;
    int y;
    int z;
    
    int sum_x = 0;
    int sum_y = 0;
    int sum_z = 0;
    
    // int total = sum_xyz;
    
    for(int i=0; i<no_of_lines; i++){
        cin>>x;
        sum_x = sum_x+x;
        cin>>y;
        sum_y = sum_y+y;
        cin>>z;
        sum_z = sum_z+z;
    }
    
    // total = sum_x+sum_y+sum_z;
    
    if(sum_x == 0 && sum_y==0 && sum_z==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}