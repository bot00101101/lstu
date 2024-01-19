#include <stdio.h>

int main() {
    int N; scanf("%d", &N);
    int K; scanf("%d", &K);

    int *a = new int[N];
    for (int i = 0; i < N; i++) { scanf("%d", &a[i]); }
    
    int max = 0; 
    int x = 0; 
    int y = K+1;
    for (int i = K+1; i < N; i++) {
        int temp = i-K-1;
        if (a[temp] > a[max]) { max = temp; }

        if (a[max] + a[i] > a[x] + a[y]) {
            x = max;
            y = i;
        }
    }

    printf("%d %d\n", x+1, y+1);
    
    delete[] a;
    return 0;
}
