#include <bits/stdc++.h>
using namespace std;
int n, m, q, p;
int main()
{

	while (~scanf("%d%d", &n, &m))
	{
		int x1, y1, x2, y2;
		vector<vector<int> > a(n + 5, vector<int> (m + 5));
		vector<vector<int> > d(n + 5, vector<int> (m + 5));
		vector<vector<int> > sum(n + 5, vector<int> (m + 5));
		scanf("%d", &p);
		for (int i = 0; i < p; i++)
		{
			scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
			d[x1][y1]++;
			d[x1][y2 + 1]--;
			d[x2 + 1][y1]--;
			d[x2 + 1][y2 + 1]++;
		}
		for (int i = 1; i <= n; i++)
			for (int j = 1; j <= m; j++)
			{
				a[i][j] = d[i][j] + a[i - 1][j] + a[i][j - 1] - a[i - 1][j - 1];              
				sum[i][j] = sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1] + (a[i][j] > 0); 
			}
		scanf("%d", &q);
		for (int i = 0; i < q; i++)
		{
			scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
			int s = sum[x2][y2] - sum[x1 - 1][y2] - sum[x2][y1 - 1] + sum[x1 - 1][y1 - 1]; 
			puts((s == (x2 - x1 + 1) * (y2 - y1 + 1)) ? "YES" : "NO");
		}
	}
	return 0;
}
