#include<bits/stdc++.h>
using namespace std;
long a[100050];
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
	long n,sum,t=0,ans=0;
	cin>>n;
	for (int i=1; i<=n; i++)
		cin>>a[i];
	sort(a+1,a+1+n);
	for (int i=1; i<=n; i++)
	{
		t=a[i]*2;
		int pos=bfind(t,1,n);
		if (pos!=-1)
		{
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
