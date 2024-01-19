#include <iostream>
#include <cmath>

int main() {
    int n; scanf("%d", &n);
    
    int m = n%60;
    int h = (n/60)%24;

    printf("%d %d\n", h, m);
    
    return 0;
}