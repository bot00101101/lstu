#include <iostream>
#include <cmath>

int main() {
    int n; scanf("%d", &n);
    
    int s = n%60;
    int m = (n/60)%60;
    int h = (n/3600)%24;

    printf("%d:%02d:%02d\n", h, m, s);
    
    return 0;
}