#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

bool jugNum(int num);

bool d3Num[1013];

void INIT() {
    for(int i = 0; i < 1013; ++i) d3Num[i] = false;
    for(int i = 0; i <= 10; ++i) {
        d3Num[i*i*i] = true;
    }
}

int main()
{
    INIT();
    int n, m;
    while(cin >>n >> m) {
        int Beg = min(n, m);
        int End = max(n, m);
        bool jug = false;
        for(int i = Beg; i <= End; ++i) {
            if(jugNum(i)) {
                if(jug == false) {
                    cout << i;
                    jug = true;
                } else {
                    cout << " " << i;
                }
            }
        }
        if(jug == false) {
            cout << "no" << endl;
        } else {
            cout << endl;
        }
    }
    return 0;
}

bool jugNum(int num) {
    int sum = 0;
    int Nnum = num;
    while(Nnum) {
        int tmp = Nnum % 10;
        sum += tmp*tmp*tmp;
        Nnum /= 10;
    }
    return num == sum;
}
