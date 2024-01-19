#include <iostream>
#include <cmath>

int main() {
    int x; scanf("%d", &x);
    int d; scanf("%d", &d);
    int count = 0;

    int temp = x;
    for (int i = 0; temp != 0; i++) {
        int t = temp % (int) std::pow(10, i+1);
        if (d == t / (int) std::pow(10, i)) { count++; }
        temp -= t;
    }
    
    printf("%d\n", count); 
    return 0;
}