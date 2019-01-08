#include <bits/stdc++.h>

using namespace std;

int main() {
    string str;
    while(cin >> str) {
        int cnt[4] = {0,0,0,0};
        int len = str.length();
        for(int i = 0; i < len; ++i) {
            char c = str[i];
            if(c >= 'A' && c <= 'Z') cnt[0] = 1;
            if(c >= 'a' && c <= 'z') cnt[1] = 1;
            if(c >= '0' && c <= '9') cnt[2] = 1;
            if(c == '~' || c == '!' || c == '@' || c == '#' || c == '$' || c == '%' || c == '^')
                cnt[3] = 1;
        }
        int sum = 0;
        for(int i = 0; i < 4; ++i) sum += cnt[i];
        if(sum >= 3 && len >= 8) cout << "YES" <<endl;
        else cout << "NO" <<endl;
    }
}
