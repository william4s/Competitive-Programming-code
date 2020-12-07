#include<bits/stdc++.h>
using namespace std;
long a[50050];
long bfind(long x,long l,long r)
{
	long mid;
	while(l<=r)
	{
		mid=(l+r)/2;
		if (a[mid]==x)
			return mid;
		if (a[mid]>x)
			r=mid-1;
		if (a[mid]<x) 
			l=mid+1;
	}
	return -1; 
}	

int main()
{
	long n,sum,t=0;
	cin>>n>>sum;
	for (int i=1; i<=n; i++)
		cin>>a[i];
//	cout<<bfind(sum,1,n);
	for (int i=1; i<=n; i++)
	{
		t=sum-a[i];
		int pos=bfind(t,i+1,n);
		if (pos!=-1)
		{
			cout<<i-1<<' '<<pos-1;
			return 0;
		}
	}
	cout<<"ERROR";
	return 0;
}
