#include <iostream>

using namespace std;

typedef unsigned long long ULL;

int main()
{
    int n, m;
    while(cin >> n >> m) {
        ULL res_odd = 0;
        ULL res_eve = 0;
        int Beg = min(n, m);
        int End = max(n, m);

        for(ULL i = Beg; i <= End; ++i) {
            if(i % 2 == 1) {
                res_odd += (i * i * i);
            } else {
                res_eve += (i*i);
            }
        }
        cout << res_eve << " " << res_odd <<endl;
    }
    return 0;
}
