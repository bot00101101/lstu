#include <iostream>

int main() {
    int a, b;

    scanf("%d", &a);
    scanf("%d", &b);

    if (a == b ) { printf("%d\n", 0); }
    else if (a > b) { printf("%d\n", 1); }
    else if (a < b) { printf("%d\n", 2); }

    return 0;
}