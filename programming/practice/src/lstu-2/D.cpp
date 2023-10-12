#include <iostream>

int sign(int x) {
    if (x > 0) { return 1; }
    else if (x < 0) { return -1; }
    else { return 0; }
}

int main() {
    int a; scanf("%d", &a);
    printf("%d", sign(a));

    return 0;
}