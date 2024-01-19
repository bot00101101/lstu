#include <iostream>

int main() {
    int N; scanf("%d", &N);
    int sum = 0;

    int temp; 
    for (int i = 0; i < N; i++) {
        scanf("%d", &temp);
        sum += temp;
    }
    
    printf("%d\n", sum);
    return 0;
}