#include<bits/stdc++.h>
using namespace std;
int b[1001];
int i,j,k,n;
long long dp[1001];
void prime(){
	for (i=2;i<=500;i++)
	if (!b[i])
		for (j=2;i*j<=1000;j++)
			b[i*j]=1;
}
int main(){
	int n;
	cin>>n;
	prime();
	dp[0]=1;
	for (i=2;i<=n;i++)
		if (!b[i])
		{
			for (j=0;j<=n;j++)
				if (dp[j]&&i+j<=n)
					dp[i+j]+=dp[j]; 
		}
	cout<<dp[n];
	return 0;
}
