#include <bits/stdc++.h>

using namespace std;

vector<int> a;
vector<int> b;

void Printf(int a, bool jug) {
    if(jug) cout << " " << a;
    else cout << a;
}

int main() {
    int n, m;
    while(cin >> n) {
        a.clear();
        b.clear();
        int tmp;
        while(n--) {
            cin >> tmp;
            a.push_back(tmp);
        }
        cin >> m;
        while(m--) {
            cin >> tmp;
            b.push_back(tmp);
        }

        n = a.size();
        m = b.size();

        int i, j;
        i = j = 0;
        bool jug = false;
        while(i < n && j < m) {
            if(a[i] < b[j]) {
                Printf(a[i++], jug);
                jug = true;
            } else {
                Printf(b[j++], jug);
                jug = true;
            }
        }

        while(i < n) {
            Printf(a[i++], jug);
            jug = true;
        }

        while(j < m) {
            Printf(b[j++], jug);
            jug = true;
        }
        cout <<endl;
    }
}
