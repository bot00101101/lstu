#include <iostream>
#include <cmath>

int main() {
    int x; scanf("%d", &x);
    x = x%100;
    printf("%d", (x-x%10)/10);
    
    return 0;
}