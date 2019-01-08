#include <bits/stdc++.h>

using namespace std;

const int maxn = 1000 + 131;

char Num[maxn];
int Sum[15];

void INIT() {
    memset(Sum, 0, sizeof(Sum));
}

int main() {
    while(cin >> Num) {
        INIT();
        int len = strlen(Num);
        for(int i = 0; i < len; ++i) {
            int integer = Num[i] - '0';
            Sum[integer]++;
        }

        int MaxNum = -1;
        int Maxpos = -1;
        for(int i = 0; i < 10; ++i) {
            if(Sum[i] > MaxNum) {
                MaxNum = Sum[i];
                Maxpos = i;
            }
        }
        cout << Maxpos <<endl;
    }
}
