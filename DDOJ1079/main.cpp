#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    while(cin >> n) {
        int sum = n;
        while(n >= 3) {
            sum += n / 3;
            n = n % 3 + n / 3;
        }
        cout << sum << endl;
    }
    return 0;
}
