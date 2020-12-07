#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,W,maxn;
ll w[110],v[110];
ll dp[105][100005];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin>>n>>W;
	for(ll i=1; i<=n; i++)
	{
		cin>>w[i]>>v[i];
		maxn+=v[i];
	}
	memset(dp,0x3f3f3f3f,sizeof(dp));
	dp[0][0]=0;
	for(ll i=1; i<=n; i++)
		for(ll j=0; j<=maxn; j++)
		{

			dp[i][j]=min(dp[i-1][j],dp[i-1][j-v[i]]+w[i]);
		}
	ll ans=0;
	for(ll j=0; j<=maxn; j++)
		if(dp[n][j]<=W)
		{
		
			ans=j;
		}
	cout<<ans;
	return 0;
}

