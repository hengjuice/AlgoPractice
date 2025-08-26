#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int a, b, c;
    cin>>a>>b>>c;
    int res = a+b+c;

    int ans = max({
        res, a*(b+c), (a+b)*c, a*b*c
    });

    cout << ans;

}