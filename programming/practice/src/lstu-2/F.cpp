#include <iostream>

int main() {
    int a, b, c;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if (a >= b && a >= c) { printf("%d\n", a); }
    else if (b >= c && b >= a) { printf("%d\n", b); }
    else if (c >= a && c >= b) { printf("%d\n", c); }
    else { printf("%d\n", a); }

    return 0;
}