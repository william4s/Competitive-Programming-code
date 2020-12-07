#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
const ll MOD=1e9+7;
ll frt,bck,p;
void bs(ll l,ll r)
{
	
	while(l<r)
	{
		ll mid=(l+r)/2;
		if (mid<p)
		{
			frt++;
			l=mid+1;
		}
		else if (mid>p)
		{
			bck++;
			r=mid;
		}
		else
			break;
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll n,x,ans=1;
	cin>>n>>x>>p;
	bs(0,n);
	for (ll i=x-1;i>=x-frt;i--)
		ans=ans*i%MOD;
	for (ll i=n-x;i>=n-x-bck+1;i--)
		ans=ans*i%MOD;
	for (ll i=1;i<=n-frt-bck-1;i++)
		ans=ans*i%MOD;
	cout<<ans;

	return 0;
}



