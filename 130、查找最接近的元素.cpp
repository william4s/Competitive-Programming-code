#include<bits/stdc++.h>
using namespace std;
long a[100100];
long bfind(long x,long a[],long l,long r)
{
	long mid;
	while(l<=r)
	{
		mid=(l+r)/2;
		if (a[mid]==x)	return mid;
		if (a[mid]>x)	r=mid-1;
		if (a[mid]<x)	l=mid+1;
	}
	if (r<=1)
		return 1;
	else
		return r;
}
int main()
{
	long n,i,j,x;
	cin>>n;
	for (i=1; i<=n; i++)
		cin>>a[i];
	long m;
//	sort(a+1,a+1+n);
	cin>>m;
	for (i=0; i<m; i++)
	{
		cin>>x;
		long k=bfind(x,a,1,n);
		if (x-a[k]>a[k+1]-x&&k<n)	k+=1;
		else if (k>=n)	k=n;
		cout<<a[k]<<endl;
		
		
	}

	return 0;
}

