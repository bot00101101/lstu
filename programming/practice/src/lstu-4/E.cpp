#include <iostream>

int main() {
    int N; scanf("%d", &N);
    int *a = new int[N];

    for (int i = 0; i < N; i++) { a[i] = N-i; }
    for (int i = 0; i < N; i++) { printf("%d ", a[i]); }

    delete[] a;
    return 0;
}