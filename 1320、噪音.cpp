#include <bits/stdc++.h>
using namespace std;
int n, m, p, q, dir[][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}}, v[501][501], ans, vis[501][501], t;
char maze[501][501];
struct node
{
	int x, y, data;
} cur, a[250001];
void bfs(int x, int y)
{
	int pos = 0;
	a[pos++] = {x, y, (maze[x][y] - 'A' + 1) * p};
	vis[x][y] = ++t;
	v[x][y] += (maze[x][y] - 'A' + 1) * p;
	for (int k = 0; k < pos; k++)
	{
		for (int i = 0; a[k].data / 2 && i < 4; i++)
		{
			int tx = a[k].x + dir[i][0], ty = a[k].y + dir[i][1];
			if (tx >= 0 && tx < n && ty >= 0 && ty < m && maze[tx][ty] != '*' && vis[tx][ty] != t)
			{
				vis[tx][ty] = t;
				a[pos++] = {tx, ty, a[k].data / 2};
				v[tx][ty] += (a[k].data / 2);
			}
		}
	}

}
int main()
{
	// cin >> n >> m >> p >> q;
	scanf("%d%d%d%d", &n, &m, &p, &q);
	for (int i = 0; i < n; i++)
		scanf("%s", maze[i]);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (isalpha(maze[i][j]))
				bfs(i, j);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			ans += (v[i][j] > q);
	printf("%d", ans);
	return 0;
}
