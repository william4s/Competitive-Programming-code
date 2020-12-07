#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF=0x3f3f3f3f;
const int N=2e5+10;
ll n,m;//²»¿ªlong long ¼û×æ×Ú 
ll w[N],h[N],ne[N],val[N],idx;
ll d[N],vis[N];
bool st[N];
void insert(ll x,ll y,ll z)
{
	w[idx]=z,val[idx]=y,ne[idx]=h[x],h[x]=idx++;
}
ll spfa()
{
	queue<ll> q;
	memset(d,0x3f,sizeof d);
	d[1]=0;
	q.push(1);
	st[1]=1;

	while(q.size())
	{
		ll t=q.front();
		q.pop();
		st[t]=0;
		if (vis[t])
			return -1;
		vis[t]++;
		for (ll i=h[t]; i!=-1; i=ne[i])
		{
			ll j=val[i];
			if (d[j]>d[t]+w[i])
			{
				d[j]=d[t]+w[i];
				if (!st[j])
				{
					q.push(j);
					st[j]=1;
				}
			}
		}

	}
	return d[n];
}

int main()
{
	ios::sync_with_stdio(false);
	memset(h,-1,sizeof h);
	cin>>n>>m;
	for (ll i=0; i<m; i++)
	{
		ll x,y,z;
		cin>>x>>y>>z;
		insert(x,y,z);

	}
	ll flag=spfa();
	if (flag==INF||flag==-1)
		cout<<"-1\n";
	else
		cout<<flag<<"\n";
	return 0;
}
