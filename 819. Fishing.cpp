#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
ll a[1010][1010],b[1010][1010];
ll M;
struct Fish
{
	ll k,S;
};
Fish fun(ll k)
{
	ll maxn=-1;
	for (ll i=1; i+k-1<=M; i++)
		for (ll j=1; j+k-1<=M; j++)
		{
			ll x1=i,y1=j,x2=i+k-1,y2=j+k-1;
			ll tem=b[x2][y2]-b[x1-1][y2]-b[x2][y1-1]+b[x1-1][y1-1];
			maxn=max(maxn,tem);
		}
	return {k,maxn};
}
Fish ans;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll n,m;
	cin>>n>>m;
	M=max(m,n);
	for (ll i=1; i<=M; i++)
	{
		for (ll j=1; j<=M; j++)
		{
			if (i<=n&&j<=m)
				cin>>a[i][j];
			b[i][j]=b[i-1][j]+b[i][j-1]-b[i-1][j-1]+a[i][j];
		}
	}
	ll s;
	cin>>s;
	ll l=1,r=M,mid;
	Fish f;
	while(l<=r)
	{
		mid=(l+r)/2;
		f=fun(mid);
		if (f.S>=s)
		{
			ans=f;
			r=mid-1;
		}
		else
		{
			l=mid+1;
		}
	}
	cout<<ans.k<<' '<<ans.S;
	return 0;
}


