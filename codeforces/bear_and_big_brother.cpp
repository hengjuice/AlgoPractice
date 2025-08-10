#include <iostream>
#include <string>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int no_of_years = 0;
    while(a <= b){
        a *= 3;
        b *= 2;
        no_of_years++;
    }
    cout<<no_of_years;
}