#include <iostream>

int main() {
    int n; scanf("%d", &n);
    int m; scanf("%d", &m);
    int **A = new int*[n];

    for (int i = 0; i < n; i++) { A[i] = new int[m]; }

    for (int ij = 0; ij < n*m; ij++) {
        int i = ij / m;
        int j = ij % m;
        A[i][j] = i*j;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) { printf("%d ", A[i][j]); }
        printf("\n");
    }

    for (int i = 0; i < n; i++) { delete[] A[i]; }
    delete[] A;

    return 0;
}
