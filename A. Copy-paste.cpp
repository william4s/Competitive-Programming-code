#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
ll a[1010];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll t;
	cin>>t;
	while(t--)
	{
		ll ans=0,n,k;
		cin>>n>>k;
		for(ll i=0; i<n; i++)
			cin>>a[i];
		sort(a,a+n);
		for(ll i=1; i<n; i++)
		{
			ans+=(k-a[i])/a[0];
		}
		cout<<ans<<"\n";
	}
	return 0;
}


