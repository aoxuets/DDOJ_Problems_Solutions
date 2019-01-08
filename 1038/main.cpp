#include <bits/stdc++.h>

using namespace std;

int Num[131];

void Clear() {
    memset(Num, 0, sizeof(Num));
}

int main() {
    int N, aid, tmp;
    while(cin >> N) {
        if(!N) break;
        Clear();
        for(int i = 0; i < N; ++i) {
            cin >>tmp;
            Num[tmp] ++;
        }
        cin >> aid;
        cout << Num[aid] <<endl;
    }
}
