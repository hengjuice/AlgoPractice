#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int no_of_problems;
    scanf("%d", &no_of_problems);

    int solved = 0;

    int a,b,c;

    string s;

    for(int i=0; i<no_of_problems; i++) {

        scanf("%d %d %d", &a, &b, &c);
        
        if (a+b+c >= 2)  {
            solved++;
        }
    }
    std::cout << solved;
}