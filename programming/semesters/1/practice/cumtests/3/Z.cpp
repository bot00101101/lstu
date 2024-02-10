#include <iostream>

int main() {
    int N; scanf("%d", &N);
    
    for (int A = 0; A <= N/3+1; A++) {
        for (int B = 0; B <= N/5+1; B++) {
            if (N == 3*A + 5*B) {
                printf("%d %d\n", A, B);
                return 0;
            }
        }
    }
    
    printf("IMPOSSIBLE\n");
    return 0;
}