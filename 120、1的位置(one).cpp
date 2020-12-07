#include<bits/stdc++.h>
using namespace std;
string fx(long x)
{
	string s="";
	while(x)
	{
		s=char(x%2+'0')+s;
		x/=2;
	}
	return s;
}
int main()
{
	string s="";
	long n;
	cin>>n;
	if (n<=0||n>1e6)
	{
		cout<<"error";
		return 0;
	}
	s=fx(n);
	for (int i=s.size()-1; i>=0; i--)
	{
		if (s[i]=='1')
			cout<<s.size()-1-i<<' ';
	}
	return 0;
}

