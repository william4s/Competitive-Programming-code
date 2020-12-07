#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
const int N=1e5+5;
struct su
{
	ll l,r;
} a[N];
bool cmp(su a,su b)
{
	return a.l<b.r;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll n,m;
	cin>>n>>m;
	for (ll i=1; i<=m; i++)
	{
		cin>>a[i].l>>a[i].r;
	}
	ll last=1,ans=0,k=1;
	for (ll j=1; j<=n; j++)
	{
		for (ll i=j; i>=last; i--)
		{

			if (a[k].l==i&&a[k].r==j)
			{
				k=k+1;
				break;
			}
			else
			{
				ans++;
				//cout<<i<<' '<<j<<endl;
			}
		}

	}
	cout<<ans;
	return 0;
}



