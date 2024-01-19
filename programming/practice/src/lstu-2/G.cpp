#include <iostream>

int main() {
    int x1, y1;
    int x2, y2;

    scanf("%d\n%d", &x1, &y1);
    scanf("%d\n%d", &x2, &y2);
    
    if (x1 == x2 || y1 == y2) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}