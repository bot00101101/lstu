#include <iostream>
#include <cmath>

int main() {
    int N; scanf("%d", &N);
    int M; scanf("%d", &M);
    int K; scanf("%d", &K);

    printf("%d\n", (int) std::ceil((double)M/(K/N)));
    return 0;
}