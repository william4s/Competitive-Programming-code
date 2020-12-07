#include<bits/stdc++.h>
using namespace std;

int a[10000001]={0};
int main(){
	long n,i;
	cin>>n;
	for (i=2;i*i<=n;i++)
	{
		for (int j=2;i*j<=n;j++)
		a[i*j]=1;
	}
	for (i=2;i<=n;i++)
	if (!a[i]) cout<<i<<' ';
	
	return 0;
}
