#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int N; scanf("%d", &N);
    int *a = new int[N];

    for (int i = 0; i < N; i++) { a[i] = pow(2, N-i); }
    for (int i = 0; i < N; i++) { printf("%d ", a[i]); }

    delete[] a;
    return 0;
}