#include <iostream>

int main() {
    int n; scanf("%d", &n);
    int s = 9*60 + n*45 + (n/2)*5 + ((n-1)/2)*15;

    int m = s%60;
    int h = (s/60)%24;
    printf("%d %d\n", h, m);

    return 0;
}