#include <iostream>

int main() {
    int N; scanf("%d", &N);
    
    for (int i = 1; i <= N; i++) {
        float x; scanf("%f", &x);
        if (437 >= x) {
            printf("Crash %d", i);
            return 1;
        }
    }
    
    printf("No crash");
    return 0;
}