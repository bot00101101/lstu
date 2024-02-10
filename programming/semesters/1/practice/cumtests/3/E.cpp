#include <iostream>
#include <cmath>

int main() {
    int x; scanf("%d", &x);
    int sum = 0;

    int temp = x;
    for (int i = 0; temp != 0; i++) {
        int t = temp % (int) std::pow(10, i+1);
        sum += t / (int) std::pow(10, i);
        temp -= t;
    }
    
    printf("%d\n", sum); 
    return 0;
}
