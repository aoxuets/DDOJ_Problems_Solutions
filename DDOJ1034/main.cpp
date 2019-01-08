#include <bits/stdc++.h>

using namespace std;

struct Node {
    string str;
    int sum;
};

int N, M, G;
int problems[100];
vector<Node>students;

bool cmp(const Node& a, const Node& b) {
    if(a.sum == b.sum) return a.str < b.str;
    return a.sum > b.sum;
}

void INIT() {
    memset(problems, 0, sizeof(problems));
    students.clear();
}

int main() {
    while(cin >> N) {
        INIT();
        if(N == 0) break;
        cin >> M >> G;
        for(int i = 0; i < M; ++i) {
            cin >> problems[i];
        }
        string strId;
        int nn, tmp, sum;
        for(int i = 0; i < N; ++i) {
            cin >> strId >> nn;
            sum = 0;
            for(int j = 0; j < nn; ++j) {
                cin >> tmp;
                sum += problems[tmp-1];
            }
            students.push_back(Node{strId, sum});
        }

        sort(students.begin(), students.end(), cmp);
        int cnt = 0;
        for(int i = 0; i < N; ++i) {
            if(students[i].sum >= G) cnt++;
        }

        cout << cnt <<endl;
        for(int i = 0; i < cnt; ++i) {
            cout << students[i].str << " " << students[i].sum <<endl;
        }

    }
}
