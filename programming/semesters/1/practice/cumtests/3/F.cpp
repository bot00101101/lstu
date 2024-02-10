#include <iostream>
#include <cmath>

int main() {
    long long int x; scanf("%ld", &x);
    bool flag = false;

    if (x != 0) {
        long long int temp = x;
        for (long long int i = 0; temp != 0; i++) {
            long long int t = temp % (long long int) std::pow(10, i+1);
            long long int y = t / (long long int) std::pow(10, i);
            if (y != 0 || flag) {
                printf("%d", y);
                flag = true;
            }
            temp -= t;
        }
    } else { printf("0"); }

    printf("\n");
    return 0;
}