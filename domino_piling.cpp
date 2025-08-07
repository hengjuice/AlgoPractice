#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int m, n;
    scanf("%d %d", &m, &n);

    // if (n<2){
    //     cout << 0;
    //     return 1;
    // }

    int area = m * n;
    int result = area/2;

    cout<<result;

}