#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,x,lose[1010],win[1010],use[1010],i,j,k;
	long long dp[1010]={0};
	cin>>n>>x;
	for (i=1;i<=n;i++)
		cin>>lose[i]>>win[i]>>use[i];
	for (i=1;i<=n;i++)
		for (j=x;j>=0;j--)
		if (j>=use[i])
			dp[j]=max(win[i]+dp[j-use[i]],dp[j]+lose[i]);
		else
			dp[j]=dp[j]+lose[i]; 
	cout<<dp[x]*5;
	return 0;
} 
