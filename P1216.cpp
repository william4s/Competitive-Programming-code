#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
long dp[1005][1005],a[1005][1005];
int main()
{
	long r,n,ans=LONG_LONG_MIN;
	cin>>r;
	for(long i=1; i<=r; i++)
	{
		for(long j=1; j<=i; j++)
			cin>>a[i][j];
	}
	for(long i=1; i<=r; i++)
		for(long j=1; j<=i; j++)
		{
			dp[i][j]=max(dp[i-1][j],dp[i-1][j-1])+a[i][j];
			if(dp[i][j]>ans)
				ans=dp[i][j];
		}
	cout<<ans;
	return 0;
}

