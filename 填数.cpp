#include<bits/stdc++.h>
using namespace std;

int main(){
	long n,x,y,t,ans=0;
	int a[110][110]={0};
	cin>>n;
	cin>>x>>y>>t;
	int j=0,i;
	for (i=1;i<=n*n;i++)
		 if (i%n==0)
		 	a[j++][(i-1)%n]=i;
		 else
		 	a[j][(i-1)%n]=i;
	
	for (i=x-1;i<x+t-1;i++)
	{
		for (j=y-1;j<y+t-1;j++)
			ans+=a[i][j];
	}
	cout<<ans;

	return 0;
} 
