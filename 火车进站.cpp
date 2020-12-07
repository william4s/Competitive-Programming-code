#include<bits/stdc++.h>
using namespace std;

const int maxn =300003, INF = 0x7f7f7f7f;
int low[maxn], a[maxn];
int n, ans;
 
int binary_search(int *a, int R, int x)

{
    int L = 1, mid;
    while(L <= R)
    {
        mid = (L+R) >> 1;
        if(a[mid] <= x)
            L = mid + 1;
        else 
            R = mid - 1;
    }
    return L;
}
 
int main()  //最长上升子序列的模板（猜的规律） ORZ
{
    scanf("%d", &n);
    for(int i=1; i<=n; i++) 
    {
        scanf("%d", &a[i]); 
        low[i] = INF;   
    }
    low[1] = a[1]; 
    ans = 1;   
    for(int i=2; i<=n; i++)
    {
        if(a[i] > low[ans])    
            low[++ans] = a[i];
        else       
            low[binary_search(low, ans, a[i])] = a[i];
    }
    printf("%d\n", ans);   
    return 0;
}
