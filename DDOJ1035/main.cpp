#include <bits/stdc++.h>

using namespace std;

bool jugEqual(int A, int B, int K);

int main() {
    int A, B, K;
    while(cin >> A >> B >> K) {
        if(A == 0 && B == 0) break;
        if(jugEqual(A, B, K)) {
            cout << "-1" << endl;
        } else {
            cout << A+B <<endl;
        }
    }
}

bool jugEqual(int A, int B, int K) {
    for(int i = 0; i < K; ++i) {
        if((A%10) != (B%10)) {
            return false;
        }
        A /= 10;
        B /= 10;
    }
    return true;
}
