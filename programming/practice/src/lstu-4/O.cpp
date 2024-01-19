#include <cstdlib>
#include <iostream>
#include <ctime>

int random(int A, int B) { return rand() % (B - A + 1) + A; }

int main() {
    srand(unsigned(time(0)));

    int A; scanf("%d", &A);
    int B; scanf("%d", &B);
    int N; scanf("%d", &N);
    int *a = new int[N];

    int sum = 0;
    for (int i = 0; i < N; i++) {
        a[i] = random(A, B);
        sum += a[i];
    }
    
    for (int i = 0; i < N; i++) { printf("%d ", a[i]); }
    printf("\n%.3f ", (float) sum/N);

    delete[] a;
    return 0;
}