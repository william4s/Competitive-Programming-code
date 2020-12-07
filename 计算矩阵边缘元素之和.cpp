#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m,ans=0;
	int a[110][110];
	cin>>m>>n;
	for (int i=0;i<m;i++)
		for (int j=0;j<n;j++)
			cin>>a[i][j];
	
	for (int i=0;i<m;i++)
		ans+=a[i][0]+a[i][n-1];
	for (int j=0;j<n;j++)
		ans+=a[0][j]+a[m-1][j];
	
	ans-=a[0][0]+a[0][n-1]+a[m-1][0]+a[m-1][n-1]; 
	cout<<ans;
	
	
	return 0;
} 
