#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int zhopka(int a, int b) {
    if (b == 0) { return a; }
    else { return zhopka(b, a%b); }
}

bool chlen(int a, int b) {
    return bool(zhopka(a, b) == 1);
}

vector<int> pizda(int n) {
    vector<int> response;

    for (int i = 1; i*i <= n; i++) {
        if (n%i == 0) { response.push_back(i); } int temp = n / i;
        if (n%temp == 0 and temp != i) { response.push_back(n / i); }
    }

    sort(response.begin(), response.end());
    return response;
}


int main() {
    int N; scanf("%d", &N);
    vector<int> X = pizda(N);
    int resp = 0;

    for (int i = 0; i < X.size(); i++) {
        int a = X[i];
        for (int j = i+1; j < X.size(); j++) {
            int b = X[j];
            if (a * b <= N and chlen(a, b)) { resp++; }
        }
    }

    printf("%d\n", resp);
    return 0;
}
