#include <iostream>
#include <cmath>

int main() {
    int a; scanf("%d", &a);
    int b; scanf("%d", &b);

    for ( ; a <= b; a++) {
        int temp = sqrt(a);
        if (temp*temp == a) {
            printf("%d\n", a); 
        }
    }

    return 0;
}
