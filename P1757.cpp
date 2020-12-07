#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int m, n, a[1010], b[1010], c1, c[1010], mc = 0,re[101][20];
    int i, j, k, t,f[1010];
    cin >> m >> n;
    for (i = 0; i < n; i++)
	{
	    cin >> a[i] >> b[i] >> c1;
	    mc = max(mc, c1);
	    c[c1] += 1;
	    re[c1][c[c1]] = i;
	}
    for (i = 1; i <= mc; i++)
	for (j = m; j >= 0; j--)
	    for (k = 1; k <= c[i]; k++)
		{
		    if (j >= a[re[i][k]])
			f[j]=max(f[j],f[j-a[re[i][k]]]+b[re[i][k]]);
		}
    cout << f[m];
    return 0;
}
