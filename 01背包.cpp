#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
ll dp[1010];
ll v[1010],w[1010];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll n,V;
	cin>>n>>V;
	for (ll i=1;i<=n;i++)	cin>>v[i]>>w[i];
	for(ll i=1; i<=n; i++)
	{
		for(ll j=V; j>=v[i]; j--)
		{
				
			dp[j]=max(dp[j],dp[j-v[i]]+w[i]);
		}
	}
	cout<<dp[V];
	return 0;
}


