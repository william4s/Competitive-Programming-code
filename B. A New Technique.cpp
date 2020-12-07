#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
ll a[510][510],b[510][510],c[250005],r[510];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll T;
	cin>>T;
	while(T--)
	{
		ll n,m;
		cin>>n>>m;
		for (ll i=1;i<=m*n;i++)
			c[i]=0;
		for (ll i=1; i<=n; i++)
		{
			ll K,p;
			for (ll j=1; j<=m; j++)
			{
				cin>>K;
				if (j==1)
					c[K]=i;
				a[i][j]=K;
			}
		}
		ll bj=0;
		for (ll i=1; i<=m; i++)
			for (ll j=1; j<=n; j++)
			{
				cin>>b[i][j];
				if (c[b[i][j]])
					bj=i;
			}

		for (ll j=1; j<=n; j++)
		{

			for (ll q=1; q<=m; q++)
				cout<<a[c[b[bj][j]]][q]<<' ';
			cout<<'\n';
		}
	
	}
	return 0;
}



