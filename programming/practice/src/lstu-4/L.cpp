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
    int count_even_numbers = 0;
    int count_odd_numbers = 0;

    for (int i = 0; i < N; i++) {
        a[i] = random(A, B);
        if (a[i]%2 == 0) { count_even_numbers++; }
        else { count_odd_numbers++; }
    }
    
    for (int i = 0; i < N; i++) { printf("%d ", a[i]); }
    printf("\n%d %d ", count_even_numbers, count_odd_numbers);

    delete[] a;
    return 0;
}