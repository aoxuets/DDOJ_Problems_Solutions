#include <bits/stdc++.h>

using namespace std;

const int maxn = 100000 + 131;

string xLine, oLine, bLine;

map<string, string> btoo;
map<char, string> xtob;

void INIT_btoo() {
    btoo["000"]="0";btoo["001"]="1";btoo["010"]="2";btoo["011"]="3";
    btoo["100"]="4";btoo["101"]="5";btoo["110"]="6";btoo["111"]="7";

    xtob['0'] = "0000";xtob['1'] = "0001";xtob['2'] = "0010";xtob['3'] = "0011";
    xtob['4'] = "0100";xtob['5'] = "0101";xtob['6'] = "0110";xtob['7'] = "0111";
    xtob['8'] = "1000";xtob['9'] = "1001";xtob['A'] = "1010";xtob['B'] = "1011";
    xtob['C'] = "1100";xtob['D'] = "1101";xtob['E'] = "1110";xtob['F'] = "1111";

}

int main() {
    INIT_btoo();
    while(cin >> xLine) {
        oLine = "";
        bLine = "";
        int xlen = xLine.length();
        for(int i = 0; i < xlen; ++i) {
            bLine += xtob[xLine[i]];
        }
        //reverse(bLine.begin(), bLine.end());
        int blen = bLine.length();
        if(blen % 3 != 0) {
            int res = blen % 3;
            if(res == 2) bLine = "0" + bLine;
            if(res == 1) bLine = "00" + bLine;
        }
        //cout << bLine <<endl;
        blen = bLine.length();
        int t = blen / 3;
        for(int i = 0; i < t; ++i) {
            oLine += btoo[bLine.substr(i*3, 3)];
        }
        //reverse(oLine.begin(), oLine.end());
        int oLen = oLine.length();
        bool jug = false;
        for(int i = 0; i < oLen; ++i) {
            if(oLine[i] == '0' && jug == false) continue;
            cout << oLine[i];
            jug = true;
        }
        if(xlen == 1 && xLine[0] == '0') cout << oLine[0];
        cout << endl;
    }
}
