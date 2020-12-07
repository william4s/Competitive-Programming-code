#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	int a[200]={0},b[200]={0};
	cin>>n;
	a[1]=b[1]=1;
	for (int i=2;i<=n;i++)
	{
		int t=0;
		for (int j=1;j<200;j++)
		{
			b[j]=(b[j])*i+t;
		//	cout<<"b:"<<b[j]<<endl;
			t=b[j]/10;
			b[j]=b[j]%10;
		}
		int k=0;
		for (int j=1;j<200;j++)
		{
			a[j]=a[j]+b[j]+k;
			k=a[j]/10;
			a[j]%=10;
		} 
	
	}
	int u;
	for (u=199;u>=1;u--)
		if (a[u]!=0) break;
	for (int i=u;i>=1;i--)
		cout<<a[i];   
	return 0;
} 
