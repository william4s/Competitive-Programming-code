#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
const int N=1e5+5;
int n,m;
int h[N],val[N],ne[N],idx;
int d[N],q[N],hh,tt=-1;  //d±£¥Ê»Î∂» 
void insert(int a,int b)
{
	val[idx]=b,ne[idx]=h[a],h[a]=idx++;
}
bool topsort()
{
	for (int i=1; i<=n; i++)
	{
		if(!d[i])
			q[++tt]=i;
	}
	while(hh<=tt)
	{
		int k=q[hh++];
		for (int i=h[k]; i!=-1; i=ne[i])
		{
			int j=val[i];
			if (--d[j]==0)
			{
				q[++tt]=j;
			}
		}
	}
	return (tt==n-1);
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	memset(h,-1,sizeof h);
	cin>>n>>m;
	for (int i=0; i<m; i++)
	{
		int a,b;
		cin>>a>>b;
		insert(a,b);
		d[b]++;
	}
	if (!topsort())
		cout<<"-1\n";
	else
	{
		for (int i=0; i<=tt; i++)
			cout<<q[i]<<" ";
		cout<<"\n";
	}
	return 0;
}



