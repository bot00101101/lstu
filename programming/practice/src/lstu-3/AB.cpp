#include <iostream>

int main() {
    int n; scanf("%d", &n);

    for (int i = 0; i < n; i++) { printf("+___ "); } printf("\n");
    for (int i = 0; i < n; i++) { printf("|%d / ", i+1); } printf("\n");
    for (int i = 0; i < n; i++) { printf("|__\\ "); } printf("\n");
    for (int i = 0; i < n; i++) { printf("|    "); } printf("\n");

    return 0;
}