#include <bits/stdc++.h>

using namespace std;

int main() {
    int sore;
    while(scanf("%d", &sore) != EOF) {
        if(sore < 0 || sore > 120) {
            puts("Score is error!");
            continue;
        }

        if(sore >= 108 && sore <= 120) {
            puts("A");
        }

        if(sore >= 100 && sore <= 107) {
            puts("B");
        }

        if(sore >= 80 && sore <= 99) {
            puts("C");
        }

        if(sore >= 72 && sore <= 79) {
            puts("D");
        }

        if(sore >= 0 && sore <= 71) {
            puts("E");
        }
    }
    return 0;
}
