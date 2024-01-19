#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

struct Eblan {
    public:
    char first_name[100];
    char last_name[100];
    int average;
};


int main() {
    int n; scanf("%d", &n);
    vector<Eblan> eblans(n);

    for (int i = 0; i < n; i++) {
        scanf("%s%s", &eblans[i].first_name, &eblans[i].last_name);
        int q, w, e; scanf("%d%d%d", &q, &w, &e);
        eblans[i].average = q+w+e;
    }

    stable_sort(
        eblans.begin(),
        eblans.end(),
        [](const Eblan &a, const Eblan &b) { return a.average > b.average; }
    );

    for (int i = 0; i < n; i++) { printf("%s %s\n", eblans[i].first_name, eblans[i].last_name); }
    
    return 0;
}