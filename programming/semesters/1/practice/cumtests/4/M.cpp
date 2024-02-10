#include <cstdlib>
#include <iostream>
#include <ctime>

int random(int A, int B) { return rand() % (B - A + 1) + A; }

int digitsSum(int n) {
    int sum = 0;
    while (n != 0) { sum += n%10; n /= 10; }
    return sum;
}

int main() {
    srand(unsigned(time(0)));

    int A; scanf("%d", &A);
    int B; scanf("%d", &B);
    int N; scanf("%d", &N);
    int K; scanf("%d", &K);

    int *a = new int[N];
    int count = 0;

    for (int i = 0; i < N; i++) {
        a[i] = random(A, B);
        if (digitsSum(a[i]) == K) { count++; }
    }
    
    for (int i = 0; i < N; i++) { printf("%d ", a[i]); }
    printf("\n%d ", count);

    delete[] a;
    return 0;
}