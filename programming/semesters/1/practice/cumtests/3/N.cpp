#include <iostream>

int main() {
    int count_null = 0;
    int count_positive = 0;
    int count_negative = 0;

    int N, temp; scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &temp);
        if      (temp == 0) { count_null++; }
        else if (temp >  0) { count_positive++; }
        else if (temp <  0) { count_negative++; }
    }
    
    printf("%d %d %d\n", count_null, count_positive, count_negative);
    return 0;
}