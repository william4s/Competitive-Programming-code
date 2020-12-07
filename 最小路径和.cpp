#include<bits/stdc++.h>
using namespace std;

int main(){
	int i,j,k,m,n;
	int a[200][200],dp[200][200];
//	m=a.length();
//	n=a.length();
    cin>>m>>n;
	for (i=0;i<m;i++)
		for(j=0;j<n;j++)
		cin>>a[i][j];
	dp[0][0]=a[0][0];
	for (i=1;i<m;i++) dp[i][0]=dp[i-1][0]+a[i][0];
	for (j=1;j<n;j++) dp[0][j]=dp[0][j-1]+a[0][j];
	for (i=1;i<m;i++)
		for (j=1;j<n;j++)
		dp[i][j]=min(a[i][j]+dp[i-1][j],a[i][j]+dp[i][j-1]);
	cout<<dp[m-1][n-1];
	return 0;
} 
