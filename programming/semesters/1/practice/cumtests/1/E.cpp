#include <iostream>
#include <cmath>

int main() {
    int MKAD = 109;

    int v; scanf("%d", &v);
    int t; scanf("%d", &t);
    
    if (v > 0) {
        int x = v*t;
        while (x > MKAD) { x -= MKAD; }
        printf("%d", x);
    } else {
        int x = -v*t;
        while (x > MKAD) { x -= MKAD; }
        printf("%d", MKAD-x);
    }

    return 0;
}