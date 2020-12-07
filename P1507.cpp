#include<bits/stdc++.h>
using namespace std;
struct food
{
	int v;
	int w;
	int k;
}a[51];
int main(){
	int n,w,v,i,j,k,dp[501][501];
	cin>>v>>w;
	cin>>n;
	for (i=0;i<n;i++)
		cin>>a[i].v>>a[i].w>>a[i].k;
	for (i=0;i<n;i++)
		for (j=v;j>=a[i].v;j--)
			for (k=w;k>=a[i].w;k--)
			dp[j][k]=max(dp[j][k],dp[j-a[i].v][k-a[i].w]+a[i].k);
	cout<<dp[v][w];
	return 0;
}
