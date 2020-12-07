#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll dp[100100],tot; //存储的是重量,数组名是价值
long w[110],v[110];
int main()
{
	ll n,W;
	cin>>n>>W;
	for(ll i=0; i<n; i++)
	{
		cin>>w[i]>>v[i];
		tot+=v[i];
	}

	for(ll i=0; i<n; i++)
	{
		for(ll j=v[i]; j<=tot;j++)
		{
			
			dp[j]=min(dp[j],dp[j-v[i]]+w[i]);

		}
	}
	
	for(ll j=tot;j>=0;j--)
	{
		if (dp[j]<=W)
		{
			cout<<j<<endl;
			return 0;;
		}
	}

	return 0;
}

