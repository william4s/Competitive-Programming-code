#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef pair<int,int> PII;
const int N=1e6+10;
int n,m;
int h[N],w[N],val[N],ne[N],idx;
int dis[N];
bool st[N];
void insert(int a,int b,int c)
{
	val[idx]=b,w[idx]=c,ne[idx]=h[a],h[a]=idx++;
}
void dijkstra()
{
	memset(dis,0x3f,sizeof dis);
	dis[1]=0;
	priority_queue<PII,vector<PII>,greater<PII> > heap;
	heap.push({0,1});
	while(heap.size())
	{
		auto t=heap.top();
		heap.pop();
		int ver=t.second,distance=t.first;
		if (st[ver])
			continue;
		st[ver]=1;
		for (int i=h[ver];i!=-1;i=ne[i])
		{
			int j=val[i];
			if (dis[j]>dis[ver]+w[i])
			{
				dis[j]=dis[ver]+w[i];
				heap.push({dis[j],j});
			}
		}
	}
	if (dis[n]==INF)
		cout<<"-1\n";
	else
		cout<<dis[n]<<endl;
}
int main()
{
	ios::sync_with_stdio(false);
	memset(h,-1,sizeof h);
	cin>>n>>m;
	while(m--)
	{
		int a,b,c;
		cin>>a>>b>>c;
		insert(a,b,c);
	}
	dijkstra();
	return 0;
}
