#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF=0x3f3f3f3f;
int n,m;
int v[550][550],dis[550];
bool st[550];
void dijkstra()
{
	dis[1]=0;
	for (int i=0;i<n-1;i++)
	{
		int t=-1;
		for (int j=1;j<=n;j++)
			if (!st[j]&&(t==-1||dis[t]>dis[j]))
				t=j;
		for (int j=1;j<=n;j++)
			dis[j]=min(dis[j],dis[t]+v[t][j]);
		st[t]=1;   
	}
	if (dis[n]!=INF)
		cout<<dis[n];
	else
		cout<<"-1";
}
int main()
{
	ios::sync_with_stdio(false);
	memset(dis,0x3f,sizeof dis);
	memset(v,0x3f,sizeof v);
	cin>>n>>m;
	for (int i=0;i<m;i++)
	{
		int a,b,w;
		cin>>a>>b>>w;
		v[a][b]=min(v[a][b],w);
	}
	dijkstra();
	
	
	
	return 0;
}
