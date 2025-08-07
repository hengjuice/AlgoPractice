#include <iostream>
#include <string>
using namespace std;

int main() {

    int number;
    scanf("%d", &number);

    if (number % 2 == 0 && number != 2) {
        printf("YES");
    }
    else {
        printf("NO");
    }
    
    return 0;
}
