#include <iostream>

int main() {
    int x1, y1;
    int x2, y2;

    scanf("%d\n%d", &x1, &y1);
    scanf("%d\n%d", &x2, &y2);
    
    int dx = x1 - x2; if (dx < 0) { dx = -dx; } 
    int dy = y1 - y2; if (dy < 0) { dy = -dy; } 
    
    if (dx+dy == 1) {
        printf("YES\n");
    } else {
        if (dx+dy == 2 && dx == 1 && dy == 1) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}