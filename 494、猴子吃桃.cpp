#include<bits/stdc++.h>
using namespace std;

long dg(long n,long t)
{
	if (t==1)
		return n;
	long ans=n;
	ans=(ans+2)*2;
	dg(ans,t-1);
}
int main()
{
	long n;
	cin>>n;
	cout<<dg(n,7);

	return 0;
}

