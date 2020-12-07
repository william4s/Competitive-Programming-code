#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int max_n=1e5+5;
int a[max_n],b[max_n];
int bj[max_n]; //0没用过 1移动过 2已经排序过
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n,m,x,t,r=-1,l;
	memset(a,-1,sizeof(a));
	cin>>n>>m;
	for(ll i=1; i<=n; i++)
	{
		cin>>a[i];
	}
	for (ll i=1; i<=m; i++)
	{
		cin>>b[i];
		bj[b[i]]=1;
	}
	for (ll i=m; i>=1; i--)
	{
		if (bj[b[i]]==1)
			{
				cout<<b[i]<<' ';
				bj[b[i]]=2;
			}
	}
	for (ll i=1;i<=n;i++)
		if (bj[a[i]]==0)
			cout<<a[i]<<' ';
	return 0;
}

