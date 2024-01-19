#include <iostream>

int main() {
    double x; scanf("%lf", &x);
    double y; scanf("%lf", &y);

    double sum = x;
    int k = 1;
 
    while (x < y){
        x *= 1.1;
        k++;
    } 

    printf("%d\n", k);
    return 0;
}