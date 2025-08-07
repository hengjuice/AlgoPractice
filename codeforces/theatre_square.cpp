#include <iostream>
#include <vector>
#include <cmath>

int main() {
    unsigned long long int n,m,a;

    scanf("%llu %llu %llu", &n, &m, &a);


    unsigned long long int x = (n + a - 1) / a;
    unsigned long long int y = (m + a - 1) / a;

    unsigned long long int least = x * y;

    std::cout << least;
}