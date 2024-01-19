#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main() {
    int N; scanf("%d", &N);

    int a[N];
    for (int i = 0; i < N; i++) { scanf("%d", &a[i]); }

    vector<int> resp(N, -1);
    stack<pair<int, int>> temp;

    for (int i = 0; i < N; i++) {
        int b = a[i];

        while (temp.size() and temp.top().first > b) {
            resp[temp.top().second] = i; temp.pop();
        };

        temp.push({b, i});
    }

    for (int i = 0; i < N; i++) { printf("%d ", resp[i]); }
    printf("\n");

    return 0;
}
