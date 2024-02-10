#include <iostream>
#include <string>

int main() {
    int A = (int) 'A'; // 65
    int z = (int) 'z'; // 122
    int x = (int) '-'; // 45

    std::string value;
    std::getline(std::cin, value);

    int count = 0;
    bool word = false;
    for (char c: value) {
        if ( (((int)c) >= A && ((int)c) <= z) || (((int)c) == x && word) ) {
            word = true;
        } else if (word) {
            word = false;
            count ++;
        }
    }

    if (word) {count ++;}
    printf("%d", count);

    return 0;
}