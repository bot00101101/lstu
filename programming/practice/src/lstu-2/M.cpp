#include <iostream>

int main() {
    int k; scanf("%d", &k);
    
    if (k%4 == 0 || k == 1) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}