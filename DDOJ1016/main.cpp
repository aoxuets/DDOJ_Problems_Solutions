#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    while(scanf("%d %d", &n, &m) != EOF) {
        int res = n % m;
        int t = n / m;
        for(int i = 0; i < t; ++i) {
            if(res == 0 && i == (t-1)) {
                printf("%d\n", (1+m)+2*m*i);
            } else {
                printf("%d ", (1+m)+2*m*i);
            }
        }
        if(res != 0) {
            printf("%d\n", (1+res)+2*m*(t));
        }
    }
    return 0;
}
