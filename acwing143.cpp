#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
const int N=1e5+5;
typedef long long ll;
ll tr[N*31][2],cnt[N*31],idx;
ll a[N];
void insert(ll x)
{
	ll p=0;
	for (ll i=30;i>=0;i--)
	{
		int u=x>>i&1;
		if (!tr[p][u]) tr[p][u]=++idx;
		p=tr[p][u];
	}
}
ll query(ll x)
{
	ll p=0,ans=0;
	for (ll i=30;i>=0;i--)
	{
		int u=x>>i&1;
		if (tr[p][!u])
		{
			p=tr[p][!u];
			ans=ans*2+1;
		}
		else
		{
			p=tr[p][u];
			ans=ans*2;
		}
	}
	return ans;
	
}
int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	ll n;
	cin>>n;
	for (ll i=1;i<=n;i++)
	{
		cin>>a[i];
		insert(a[i]);
	}
	ll res=-INF;
	for (ll i=1;i<=n;i++)
	{
		res=max(res,query(a[i]));
	}
	cout<<res;
	
	return 0;
}



