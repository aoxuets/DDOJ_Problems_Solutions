#include <bits/stdc++.h>

using namespace std;

struct Node {
    string id;
    string name;
    int scores;
};

bool cmp1(const Node& a, const Node& b) {
    return a.id < b.id;
}

bool cmp2(const Node& a, const Node& b) {
    if(a.name == b.name) return a.id < b.id;
    return a.name < b.name;
}

bool cmp3(const Node& a, const Node& b) {
    if(a.scores == b.scores) return a.id < b.id;
    return a.scores < b.scores;
}

int N, C;
vector<Node> Line;

int main() {
    int Case = 1;
    string id;
    string name;
    int scores;
    while(cin >> N >> C) {
        if(N == 0 && C == 0) break;
        Line.clear();
        for(int i  = 0; i < N; ++i) {
            cin >> id >> name >> scores;
            Line.push_back(Node{id, name, scores});
        }
        if(C == 1) { sort(Line.begin(), Line.end(), cmp1); }
        if(C == 2) { sort(Line.begin(), Line.end(), cmp2); }
        if(C == 3) { sort(Line.begin(), Line.end(), cmp3); }

        cout << "Case "<< Case++ <<":\n";
        for(int i = 0; i < N; ++i) {
            cout << Line[i].id << " " << Line[i].name << " " << Line[i].scores <<endl;
        }
    }
}
