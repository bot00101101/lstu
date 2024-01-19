#include <iostream>

int main() {
    int a; scanf("%d", &a);
    int b; scanf("%d", &b);
    int c; scanf("%d", &c);
    int d; scanf("%d", &d);

    for ( ; a <= b; a++) {
        if (a%d == c) { 
            printf("%d\n", a); 
        }
    }

    return 0;
}
