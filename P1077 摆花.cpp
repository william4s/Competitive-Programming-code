#include<bits/stdc++.h>
using namespace std;
int n,m,j;   int dp[110][110],a[110];
const int mod=1000007;
/*int dfs(int x,int k)
{
	int ans=0;
	if (k==m) return 1;
	if (x==n) return 0;
	if (k>m) return 0;
	if (dp[x][k]) return dp[x][k];
	for (int i=0;i<=a[x];i++) 
		ans=(ans+dfs(x+1,k+i))%mod;
	dp[x][k]=ans;
	return ans;
} */
int main(){
	
	
	cin>>n>>m;
	for (int i=0;i<n;i++)
		cin>>a[i];
	cout<<dfs(0,0);
	
	return 0;
} 
