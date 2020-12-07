#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
ll a[5050];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll T;
	cin>>T;
	while(T--)
	{
		ll n;
		cin>>n;
		for (ll i=1; i<=n; i++)
		{
			cin>>a[i];
		}
		if (count(a+1,a+1+n,a[1])==n)
		{
			cout<<"NO\n";
			continue;
		}
		else
			cout<<"YES\n";
		ll lst;
		for (ll i=2; i<=n; i++)
		{

			if (a[i]!=a[1])
			{
				cout<<1<<' '<<i<<'\n';
				lst=i;
			}
		}
		for (ll i=2; i<=n; i++)
		{
			if (a[i]==a[1])
			{
				cout<<lst<<' '<<i<<'\n';
			}
		}

	}
	return 0;
}


