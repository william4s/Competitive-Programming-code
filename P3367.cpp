#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
const ll max_n=1e4+5;
const ll max_m=2e5+5;
ll pre[max_n];
bool t[max_n];
ll Find(ll x)
{
	ll r=x;
	while(r!=pre[r])
		r=pre[r];
	ll i=x,j;
	while(pre[i]!=r)
	{
		j=pre[i];
		pre[i]=r;
		i=j;
	}
	return r;
}
void mix(ll x,ll y)
{
	ll fx=Find(x),fy=Find(y);
	if (fx!=fy)
	{
		pre[fy]=fx;
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll n,m;
	cin>>n>>m;
	for(ll i=1; i<=n; i++)
		pre[i]=i;
	for(ll i=1; i<=m; i++)
	{
		ll z,x,y;
		cin>>z>>x>>y;
		if (z==1)
			pre[Find(y)]=Find(x);
		else
		{
			ll fx=Find(x),fy=Find(y);
			if(fx!=fy)
			{
				cout<<"N\n";
			}
			else
				cout<<"Y\n";
		}

	}
	return 0;
}


