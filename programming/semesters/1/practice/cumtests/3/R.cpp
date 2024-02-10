#include <iostream>

int main() {
    int N; scanf("%d", &N);

    float sum = 1;
    int temp = 1;
    if (N <= 10) {
        for (int i = 1; i <= N; i++) {
            temp *= i;
            sum += (float) 1 / temp;
        }
    } else { sum = 2.71828f; }

    printf("%.5f\n", sum);
    return 0;
}