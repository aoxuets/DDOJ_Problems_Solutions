#include <bits/stdc++.h>

using namespace std;

map<char,int> table;

int main()
{
    string str1, str2;
    while(getline(cin, str1)) {
        if(str1[0] == '#') break;
        table.clear();
        int len = str1.length();
        for(int i = 0; i < len; ++i) {
            table[str1[i]] = 0;
        }

        getline(cin, str2);
        int len2 = str2.length();
        for(int i = 0; i <len2; ++i) {
            if(table.find(str2[i]) != table.end()) {
                table[str2[i]] ++;
            }
        }

        for(int i = 0; i < len; ++i) {
            cout << str1[i] << " " << table[str1[i]] <<endl;
        }

    }
    return 0;
}
