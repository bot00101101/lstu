#include <iostream>

int main() {
    int a; scanf("%d", &a);
    int b; scanf("%d", &b);

    for ( ; a <= b; a++) {
        if (a%2 == 0) { 
            printf("%d\n", a); 
        }
    }

    return 0;
}