#include <iostream>

int main() {
    int n; scanf("%d", &n);
    int count = 0;

    for (int i = 1; ; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", i);
            if (n == ++count) { return 0; }
        }
    }

    return 0;
}