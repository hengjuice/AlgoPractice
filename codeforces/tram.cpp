#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

int main(){
    int n;
    cin >> n;
    int passengers = 0;
    int res = 0;
    while(n--){
        int a, b;
        cin >> a >> b;
        passengers = passengers - a + b;
        res = max(passengers, res);
    }
    cout << res;
    
}