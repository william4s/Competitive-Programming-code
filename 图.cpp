#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[10005],adj[10005][10005]; //a存储 i->j的连通,adj边权
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n,k,f,i,j,w;
	cin>>n>>k;
	for(i=0; i<n; i++)
		cin>>a[i];
	for(i=0; i<n; i++)
	{
		cin>>w;
		adj[i][a[i]]=w;
	}
	for(i=0; i<n; i++)
	{
		ll sum=0,minn=LONG_LONG_MAX,pos=i;
		for(j=0;j<k;j++)
		{
		//	cout<<pos<<"->"<<a[pos]<<"\n";
			sum+=adj[pos][a[pos]];
			if (minn>adj[pos][a[pos]])
				minn=adj[pos][a[pos]];
			pos=a[pos];
		}
		cout<<sum<<' '<<minn<<"\n";
	}
	return 0;
}
