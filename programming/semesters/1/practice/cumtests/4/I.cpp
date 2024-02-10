#include <iostream>

int main() {
    int N; scanf("%d", &N);
    int *a = new int[N];

    for (int i = 0; i < N; i++) {
        if (i <= 1) { a[i] = 1; }
        else { a[i] = a[i-1] + a[i-2]; } 
    }

    for (int i = 0; i < N; i++) { printf("%d ", a[i]); }

    delete[] a;
    return 0;
}