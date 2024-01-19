#include <iostream>

int main() {
    char value[255];
    scanf("%s", &value);

    int sum = 0;
    for (char c: value) {
        if ((int)c == 0) { break; }
        sum += (int) c - 48;
    }

    if (sum%3 == 0) { printf("YES"); }
    else { printf("NO"); }

    return 0;
}