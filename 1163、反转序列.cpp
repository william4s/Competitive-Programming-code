#include<bits/stdc++.h>
using namespace std;
long a[100010],b[100010];
bool cmp(long x,long y)
{
	return x>y;
}
int main()
{
	long n,x,t,l1=0,l2=0;
	scanf("%ld",&n);
	for (long i=0; i<n; i++)
	{
		scanf("%ld",&x);
		if (x%2==0)
		{
			a[l1++]=x;
		}
		else
		{
			b[l2++]=x;
		}

	}

	if (n%2==0)
	{

		for (int i=l1-1; i>=0 ;i--)
			cout<<a[i]<<' ';
		for (int i=0; i<l2; i++)
			cout<<b[i]<<' ';
	}
	else
	{

		for (int i=l2-1; i>=0; i--)
			cout<<b[i]<<' ';
		for (int i=0; i<l1; i++)
			cout<<a[i]<<' ';
	}
	return 0;
}

