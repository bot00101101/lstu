#include <iostream>
#include <cmath>

int main() {
    int x; scanf("%d", &x);
    printf("%d", (x-x%10)/10);
    
    return 0;
}