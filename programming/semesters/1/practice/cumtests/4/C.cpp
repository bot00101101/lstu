#include <iostream>

int main() {
    int X; scanf("%d", &X);
    int N; scanf("%d", &N);
    int *a = new int[N];

    for (int i = 0; i < N; i++) { a[i] = X++; }
    for (int i = 0; i < N; i++) { printf("%d ", a[i]); }

    delete[] a;
    return 0;
}