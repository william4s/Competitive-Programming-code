#include<bits/stdc++.h>
using namespace std;
int prime(long t)
{
	long i;
	for (i=2;i*i<=t;i++)
	 if (t%i==0) return 0;
return 1;
}
int main(){
	long i,n,t,ct=0,a[200];
	cin>>n;
	for (i=0;i<n;i++)  
	{
		cin>>t;
		if (prime(t)&&t>=2) a[ct++]=t;
	}
	for (i=0;i<ct;i++) cout<<a[i]<<' ';
	return 0;
}
