/*#include <bits/stdc++.h>

using namespace std;

struct Node {
    char status;
    int h;
    int m;
};

Node boots[200];

void INIT() {
    for(int i = 0; i < 200; ++i) {
        boots[i] = Node{'N', 0, 0};
    }
}

int main() {
    int preH, preM, i;
    preH = preM = -1;

    int cnt = 0;;
    double minties = 0;
    INIT();

    while(1) {
        scanf("%d", &i);
        getchar();
        if(i == -1) {
            break;
        }
        char s;
        int h, m;
        scanf("%c %d:%d",&s, &h, &m);
        //printf("Boots[%d]: %c %d:%d\n",i,s,h,m);
        if(i == 0 || (h < preH) || (h == preH && m <= preM)) {
            int mm;
            if(cnt == 0) mm = 0;
            else mm = ((minties / cnt) + 0.5);
            printf("%d %d\n",cnt, mm);
            cnt = 0;
            minties = 0;
            INIT();
        }

        if(boots[i].status == 'N' && s == 'S') {
            boots[i].status = s;
            boots[i].h = h;
            boots[i].m = m;
        }

        if(boots[i].status == 'S' && s == 'E') {
            boots[i].status = 'N';
            if(h == boots[i].h) {
                minties += m - boots[i].m;
                cnt++;
            } else {
                minties += 60 - boots[i].m;
                minties += 60*(h-boots[i].h-1);
                minties += m;
                cnt++;
            }
        }
        preH = h;
        preM = m;
    }
}*/

#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

typedef struct _rent
{
    int cnt;
    int stim;
    int etim;
    int ttim;
    bool flag;
}rent;

rent rt[101];

int main()
{
//    freopen("input.in", "r", stdin);
    int bnum, i, ttime, cnt;
    char op;
    int timh, timm;
    memset(rt, 0, sizeof(rt));
    while(scanf("%d", &bnum)!=EOF){
        if(bnum == -1)break;
        if(bnum == 0){
            scanf(" %c %d:%d", &op, &timh, &timm);
            ttime = cnt = 0;
            for(i = 1; i < 101; i ++){
                cnt += rt[i].cnt;
                ttime += rt[i].ttim;
            }
            printf(ttime == 0 ? "0 0\n" : "%d %d\n", cnt,
                   (int)(1.0*ttime / cnt + 0.5));
            memset(rt, 0, sizeof(rt));
        }
        else{
            scanf(" %c %d:%d", &op, &timh, &timm);
            if(op == 'S'){
                rt[bnum].stim = timh*60 + timm;
                rt[bnum].flag = 1;
            }
            if(op == 'E'){
                rt[bnum].etim = timh * 60 + timm;
                if(rt[bnum].flag != 0){
                    rt[bnum].cnt ++;
                    rt[bnum].ttim += rt[bnum].etim - rt[bnum].stim;
                    rt[bnum].flag = 1;
                }
            }
        }
    }
    return 0;
}
