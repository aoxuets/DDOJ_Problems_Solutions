#include <bits/stdc++.h>

using namespace std;

const int days[] = {
    31,28,31,30,31,30,31,31,30,31,30,31
};

int main() {
    int year, month, day;
    while(scanf("%d/%d/%d",&year, &month, &day) != EOF) {
        int num = 0;
        for(int i = 0; i < month - 1; ++i) {
            num += days[i];
        }
        bool jug = false;
        if( ((year % 4 == 0)&&(year%100 != 0)) || (year%400 == 0) ) jug = true;
        if(month > 2 && jug) num ++;
        num += day;
        printf("%d\n", num);
    }
    return 0;
}
