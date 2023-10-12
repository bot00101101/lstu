#include <iostream>
#include <cmath>

int main() {
    int x; scanf("%d", &x);
    
    int a = x%10;
    int b = ((x-a)%100)/10;
    int c = (x-x%100)/100;

    printf("%d\n", a+b+c);
    
    return 0;
}