#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    char op;
    char str[300];
    int cnt = 0;
    while(scanf("%d%c%d=%s", &a, &op, &b, str) != EOF) {
        if(str[0] == '?') continue;
        else {
            int c = atoi(str);
            if(op == '+' && ((a+b) == c)) cnt++;
            if(op == '-' && ((a-b) == c)) cnt++;
        }
    }
    printf("%d\n",cnt);
}
