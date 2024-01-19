#include <iostream>
#include <cmath>

int main() {
    int x; scanf("%d", &x);
    
    x += 1;
    x += x%2;
    
    printf("%d\n", x);
    
    return 0;
}