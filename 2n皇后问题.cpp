#include <iostream>
#include<cmath>
using namespace std;
int n,ans = 0,a[100][100],wq[100],bq[100];
void bqueen(int k)
{
    int i, j, judge;
    for (i = 0; i < (k - 1); i++)
        {
            judge = bq[i] - bq[k - 1];
            if (judge==0 || fabs(judge) == fabs(k - 1 - i))
                return ;
        }
    if (k == n)
        {
            ans++;
            return ;
        }
    for (j = 0; j < n; j++)
        {
            if (a[k][j] && j != wq[k])
                {
                    bq[k] = j;
                    bqueen(k + 1);
                }
        }
    
}
void  wqueen(int k)
{
    int i, j,judge;
    for (i = 0; i < (k - 1); i++)
        {  
            judge = wq[i] - wq[k - 1];
            if (judge == 0 || fabs(k - 1 - i) == fabs(judge))
            return    ;
            
        }
    if (k == n)
        {
            bqueen(0);
            return ;
        }
    for (j = 0; j < n; j++)
        {
            if (a[k][j])
                {
                    wq[k] = j;
                    wqueen(k + 1);
                }
        }
    
}
int main()
{
    int i, j;
    scanf("%d", & n);
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    wqueen(0);
    printf("%d", ans);

    return 0;
}
