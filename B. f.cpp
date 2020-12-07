#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1000010;
const int INF=0x3f3f3f3f;
int head[N],cnt,ans;
struct eg
{
	int v,c,nex;
} edge[N*2];
int Max1[N],Max2[N],Max3[N];
int son1[N],son2[N];
void addedge(int u,int v,int c)
{
	edge[cnt]=(eg)
	{
		v,c,head[u]
	};
	head[u]=cnt++;
}
void dfs1(int u,int pre)
{
	for(int i=head[u]; ~i; i=edge[i].nex)
	{
		int v=edge[i].v,c=edge[i].c;
		if(pre==v) continue;
		dfs1(v,u);
		if(c+Max1[v]>=Max1[u])
		{
			Max2[u]=Max1[u];
			son2[u]=son1[u];
			Max1[u]=c+Max1[v];
			son1[u]=v;
		}
		else if(c+Max1[v]>Max2[u])
		{
			Max2[u]=c+Max1[v];
			son2[u]=v;
		}
	}

}
void dfs2(int u,int pre)
{
	for(int i=head[u]; ~i; i=edge[i].nex)
	{
		int v=edge[i].v,c=edge[i].c;
		if(pre==v) continue;

		if(son1[u]!=v)
		{
			Max3[v]=Max1[u]+c;
		}
		else
		{
			Max3[v]=Max2[u]+c;
		}
		Max3[v]=max(Max3[u]+c,Max3[v]);
		dfs2(v,u);
	}
}
int main()
{
	int n;
	cin>>n;
	memset(head,-1,sizeof head);
	for(int i=1,u,v,c; i<n; ++i)
	{
		cin>>u>>v;
		addedge(u,v,1);
		addedge(v,u,1);
	}
	dfs1(1,0);
	dfs2(1,0);
	for(int i=1; i<=n; ++i)
		cout<<max(Max1[i],max(Max2[i],Max3[i]))<<endl;

	return 0;
}
