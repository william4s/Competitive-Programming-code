#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
const int maxn=40;
int dp[maxn][maxn];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll n,m;
	cin>>n>>m;
	dp[1][1]=1;
	for(ll i=1;i<=n;i++)
	{
		for(ll j=1;j<=m;j++)
		{
			if (i==1&&j==1)
				continue;
			if((i&1)||(j&1))
			{
				dp[i][j]=dp[i-1][j]+dp[i][j-1];
			}
			
		}
	}
	cout<<dp[3][3];
	return 0;
}
