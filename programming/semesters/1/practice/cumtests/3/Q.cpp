#include <iostream>

int main() {
    int n; scanf("%d", &n);

    int response = 1;
    for (int i = 1; i <= n; i++) {
        response *= i;
    }
    
    printf("%d\n", response);
    return 0;
}