#include<bits/stdc++.h>
using namespace std;
string fx(long x,long r)
{
	string s="";
	long t;
	while(x)
	{
		t=x%r;
		if (t<10)
		{
			s=char(t+'0')+s;
		}
		else
		{
			s=char(t-10+'A')+s;
		}
		x/=r;
	}
	return s;
}
int main()
{
	string s="";
	long n,r;
	cin>>n>>r;
	cout<<fx(n,r);

	return 0;
}

