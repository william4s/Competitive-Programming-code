#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef pair<int, int> PII;
const int MAXN = 10010;
int dsu[MAXN], mark[MAXN];
int find(int u) {
    if (dsu[u] == 0) return u;
    int fu = find(dsu[u]);
    if (dsu[u] != fu) { // 没有直接连在根上
        mark[u] += mark[dsu[u]]; // 把父亲那的数据懒标记下传
        dsu[u] = fu; // 把根设为父亲， 状态压缩
    }
    return fu;
}
int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= m; i++) {
        int op, a, b;
        scanf("%d%d%d", &op, &a, &b);
        if (op == 1) {
            int fa = find(a);
            int fb = find(b);
            if (fa != fb) {
                dsu[fa] = fb;
                /*
                由于fa接到了fb上，fb的mark之后会传递给fa
                但是这部分数据是fb独有的，不该传给fa
                所以事先在fa里减掉一个mark[fb]
                之后mark[fb]传回来才能保持不受影响
                */
                mark[fa] -= mark[fb];
            }
        } else {
            int fa = find(a);
            mark[fa] += b;
        }
    }
    for (int i = 1; i <= n; i++) {
        int res = mark[i];
        int fi = find(i);
        if (fi != i) res += mark[fi]; // 自己不是根，就说明有部分数据在根上还没传下来
        printf("%d%c", res, " \n"[i == n]);
    }
    return 0;
}