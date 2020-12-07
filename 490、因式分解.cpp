#include<bits/stdc++.h>
using namespace std;
long n,ans;
void dg(long t)
{
	if (t==1)
		{
			ans++;
			//cout<<endl;
			return ;
		}
	for(long i=t; i>=2; i--)
	{
		if (t%i==0)
		{
			//	cout<<i<<"*";
	
			dg(t/i);
		}
	}
}
int main()
{
	cin>>n;
/*	if (n<=2)
	{
		cout<<1;
		return 0;
	} */
	dg(n);
	cout<<ans;
	return 0;
}

