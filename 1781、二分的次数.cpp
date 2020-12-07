#include<bits/stdc++.h>
using namespace std;
long a[10010],n;

long bfind(long a[],long x)
{
	long m,l=0,r=n-1,ans=0;
	while(l<=r)
	{
		m=(l+r)/2;
		if (a[m]==x) return ++ans;
		if (a[m]>x)
		{
			ans++;
			r=m-1;
		}
		if (a[m]<x)
		{
			ans++;
			l=m+1;
		}
	}
	
}
int main(){
	long x,i,j;
	cin>>n>>x;
	for (i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	cout<<bfind(a,x);

	return 0;
}

