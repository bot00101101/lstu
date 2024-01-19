#include <iostream>

int main() {
    int s; scanf("%d", &s);
    int n; scanf("%d", &n);
    
    int *a = new int[n];
    for (int i = 0; i < n; i++) { scanf("%d", &a[i]); }
    
    for (int j = 1; j < n; j++) {
        for (int i = 0; i < n-j; i++) {
            if (a[i] > a[i+1]) {
                int temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
    }

    int count = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] >= s) {
            s = a[i] + 3;
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}