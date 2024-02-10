 #include <iostream>

int main() {
    int n; scanf("%d", &n);
    int m; scanf("%d", &m);
    int **A = new int*[n];

    for (int i = 0; i < n; i++) {
        A[i] = new int[m];
        for (int j = 0; j < m; j++) {
            if (i%2 == 0) { A[i][j] = i*m + j; }
            else { A[i][j] = i*m + (m-j-1); }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) { printf("%3d ", A[i][j]); }
        printf("\n");
    }

    for (int i = 0; i < n; i++) { delete[] A[i]; }
    delete[] A;

    return 0;
}
