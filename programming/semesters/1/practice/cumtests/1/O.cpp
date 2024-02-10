#include <iostream>

int main() {
    int a; scanf("%d", &a);
    int b; scanf("%d", &b);
    int n; scanf("%d", &n);
    
    int price = (a*100 + b)*n;
    printf("%d %d\n", price/100, price%100);

    return 0;
}