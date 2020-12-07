#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
const int maxn=110;
ll v[maxn],w[maxn],s[maxn];
ll dp[110][110];
int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	ll n,m,i,j,k;
	cin>>n>>m;
	for(i=1;i<=n;i++)
	{
		cin>>v[i]>>w[i]>>s[i];
	}
	for (i=1;i<=n;i++)
		for(j=0;j<=m;j++)
			for(k=0;k<=s[i]&&k*v[i]<=j;k++)
			dp[i][j]=max(dp[i][j],dp[i-1][j-k*v[i]]+k*w[i]);
	cout<<dp[n][m];
	return 0;
}


