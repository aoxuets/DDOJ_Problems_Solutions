#include <bits/stdc++.h>

using namespace std;

struct Node {
    int x, y;
};

vector<Node> Line;

int main() {
    int x, y;
    int leftX, leftY, rightX, rightY;

    while(1) {
        Line.clear();
        while(cin >> x >> y) {
            if(x == 0 && y == 0) break;
            Line.push_back(Node{x, y});
        }
        int Len = Line.size();
        if(Len == 0) break;
        leftX = leftY = 99999;
        rightX = rightY = -99999;
        for(int i = 0; i < Len; ++i) {
            leftX = min(leftX, Line[i].x);
            leftY = min(leftY, Line[i].y);
            rightX = max(rightX, Line[i].x);
            rightY = max(rightY, Line[i].y);
        }
        cout << leftX << " " << leftY << " "
             << rightX << " " << rightY << endl;
    }
}
