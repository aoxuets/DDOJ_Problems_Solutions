#include <bits/stdc++.h>

using namespace std;

const int maxn = 100+131;

struct Node {
    double discount;
    int limit;
};

bool cmp(const Node &a, const Node &b) {
    return a.discount < b.discount;
}

Node line[maxn];
int N, T;

int main()
{
    while(cin >> N >> T) {
        for(int i = 0; i < N; ++i) {
            cin >> line[i].discount >> line[i].limit;
        }

        sort(line, line+N, cmp);
        double pay = 0;
        int cnt = 0;
        while(T) {
            if(cnt >= N) {
                pay += T;
                T = 0;
            }
            if(T > line[cnt].limit) {
                T -= line[cnt].limit;
                pay += line[cnt].limit * line[cnt].discount;
            } else {
                pay += T * line[cnt].discount;
                T = 0;
            }
            cnt++;
        }
        cout << pay << endl;
    }
    return 0;
}
