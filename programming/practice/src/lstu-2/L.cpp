#include <iostream>

int main() {
    int n, m, k;
    scanf("%d\n%d\n%d", &n, &m, &k);
    
    if (k <= m*n && (k%n == 0 || k%m == 0)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}