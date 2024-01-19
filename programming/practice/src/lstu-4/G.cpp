#include <iostream>

int main() {
    int X; scanf("%d", &X);
    int D; scanf("%d", &D);
    int N; scanf("%d", &N);
    int *a = new int[N];

    for (int i = 0; i < N; i++) { a[i] = X+D*(N-i-1); }
    for (int i = 0; i < N; i++) { printf("%d ", a[i]); }

    delete[] a;
    return 0;
}