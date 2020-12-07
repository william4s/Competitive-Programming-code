#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,a[220][220]={0},i,j,dp[220];
	cin>>n;
	for (i=1;i<n;i++)
	{
		for (j=i+1;j<=n;j++)
		cin>>a[i][j];
	dp[i]=INT_MAX;
	}
	dp[n]=INT_MAX;
	dp[0]=0;
	dp[1]=0;
	for (i=2;i<=n;i++)
	{
		for (j=1;j<=i;j++)
		dp[i]=min(dp[i],a[j][i]+dp[j]);
	 } 
	cout<<dp[n]; 
	return 0;
} 
