#include <bits/stdc++.h>

using namespace std;

int main() {
    string str;
    int Case = 1;
    while(cin >> str) {
        string tmp = str;
        reverse(str.begin(), str.end());
        if(tmp == str) {
            cout << "case"<<Case++<<": yes"<<endl;
        } else {
            cout << "case"<<Case++<<": no"<<endl;
        }
    }
}
