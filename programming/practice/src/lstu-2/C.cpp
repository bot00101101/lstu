#include <iostream>

int main() {
    int a, b;

    scanf("%d", &a);
    scanf("%d", &b);

    if ((a !=1 && b !=1) || (a == 1 && b == 1)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}