#include <iostream>

int main() {
    int a, b, c, d; scanf("%d\n%d\n%d\n%d", &a, &b, &c, &d);
    
    if (a == 0 && b == 0) { printf("INF\n"); }
    else {
        if (a == 0 || b%a != 0 || c*(-b/a)+d == 0) {
            printf("NO\n");
        } else {
            printf("%d\n", -b/a);
        }
    }

    return 0;
}