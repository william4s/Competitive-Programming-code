#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;

const int MAX = 3e5 + 7;
const int MOD = 20071027;
const int maxnode =  4000 * 100 + 8;
int ch[maxnode][26];
int val[maxnode];
int sz;
int idx(char c) { return c - 'a';}

void insert(char *s, int v) {
    int u = 0, n = strlen(s);
    for (int i = 0; i < n ; ++i) {
        int c = idx(s[i]);
        if (!ch[u][c]) {
            memset(ch[sz], 0, sizeof(ch[sz]));
            val[sz] = 0;
            ch[u][c] = sz++;
        }
        u = ch[u][c];
    }

    val[u] = v;
}


char str[MAX];
int s;
int dp[MAX];

void solve(int ca) {
    memset(dp, 0, sizeof(dp));
    int n = strlen(str);
    dp[n] = 1;
    for (int i = n - 1; i >= 0; --i) {
        int u = 0;
        for (int j = i; j < n; ++j) {
            if (ch[u][ idx(str[j]) ]) {
                if (val[ ch[u][ idx(str[j]) ] ] == 1) dp[i] = (dp[i] + dp[j + 1]) % MOD;
                u = ch[u][ idx(str[j]) ];
            } else {
                break;
            }
        }
    }

    printf("Case %d: %d\n", ca, dp[0]);
}

int main()
{

    int ca = 1;
    while (scanf("%s", str) != EOF) {
        scanf("%d", &s);
        sz = 1;
        memset(ch[0], 0, sizeof(ch[0]));
        char ss[105];
        for (int i = 0; i < s; ++i) {
            scanf("%s", ss);
            insert(ss, 1);
        }

        solve(ca++);


    }
 
    return 0;
}
