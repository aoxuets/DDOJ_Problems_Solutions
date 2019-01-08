#include <bits/stdc++.h>

using namespace std;

const string secret = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
const string origin = "VWXYZABCDEFGHIJKLMNOPQRSTU";

map<char, char> table;

void INIT() {
    table.clear();
    int len = secret.length();
    for(int i = 0; i < len; ++i) {
        table[secret[(i+5) % len]] = secret[i];
    }
}


int main() {
    INIT();
    string str;
    while(getline(cin, str)) {
        if(str == "ENDOFINPUT") break;
        if(str == "START" || str == "END") {
            continue;
        } else {
            int len = str.length();
            for(int i = 0; i < len; ++i) {
                if((str[i] >= 'A' && str[i] <= 'Z')) {
                    str[i] = table[str[i]];
                }
            }
            cout << str <<endl;
        }
    }
    return 0;
}
