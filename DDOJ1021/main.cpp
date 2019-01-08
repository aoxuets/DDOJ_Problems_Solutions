#include <bits/stdc++.h>

using namespace std;

const string aidStr = "EASY";

int main() {
    string str;
    while(cin >> str) {
        int len = str.length();
        /*for(int i = 0; i < len; ++i) {
            if(str[i] >= 'a' && str[i] <= 'z') str[i] = str[i] - 32;
        }*/
        int i, j;
        i = j = 0;
        while(i < len && j < 4) {
            if(str[i] == aidStr[j]) i++, j++;
            else i++;
        }
        if(j == 4) cout << "easy" <<endl;
        else cout << "difficult" <<endl;
    }
}
