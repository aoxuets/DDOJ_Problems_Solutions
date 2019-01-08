#include<bits/stdc++.h>

using namespace std;

int main() {
    int M;
    while(cin >> M) {
        if(M % 2 == 1) {
            cout << 0 <<endl;
            continue;
        }
        int res = M / 2;
        res--;
        if(M % 4 == 0) res --;
        cout << res / 2 <<endl;
    }
    return 0;
}
