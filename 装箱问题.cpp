#include<bits/stdc++.h>
using namespace std;
int dp[20020]={0};

int main(){
	int v,n,i,j,k,a[35];
	cin>>v>>n;
	for (i=0;i<n;i++)
		cin>>a[i]; 
	for (i=0;i<n;i++)
		for (j=v;j>=a[i];j--)
		{
			dp[j]=max(dp[j],dp[j-a[i]]+a[i]);
		}	
	cout<<v-dp[v];
	
	return 0;
}
