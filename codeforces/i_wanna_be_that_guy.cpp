#include <iostream>
#include <set>

using namespace std;

int main(){
    int n;
    cin >> n;

    int p;
    cin >> p;

    set<int> A;

    for(int i=0; i<p; i++){
        int temp;
        cin >> temp;
        A.insert(temp);
    }

    int q;
    cin >> q;
    for(int i=0; i<q; i++){
        int temp;
        cin >> temp;
        A.insert(temp);
    }

    if (A.size() == static_cast<size_t>(n))
        cout << "I become the guy.";
    else
        cout << "Oh, my keyboard!";

    return 0;

}