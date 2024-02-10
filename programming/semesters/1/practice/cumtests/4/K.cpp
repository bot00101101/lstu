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

    int count = 0;
    for (int i = 0; i < N; i++) {
        a[i] = random(A, B);
        if (100 <= a[i] && a[i] <= 999 && a[i]%5 != 0) {
            count++;
        }
    }
    
    for (int i = 0; i < N; i++) { printf("%d ", a[i]); }
    printf("\n%d ", count);

    delete[] a;
    return 0;
}