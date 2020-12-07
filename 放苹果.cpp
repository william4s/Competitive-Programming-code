#include<bits/stdc++.h>
using namespace std;
long dg(int m,int n)
{
	if (n==0)
		return 0;
	if (m==0)
		return 1;
	if (n>m)
		return dg(m,m);
	if (n<=m)
		return dg(m,n-1)+dg(m-n,n);

}
int main()
{
	int t,m,n;
	cin>>t;
	if (t==0)
	{
		cout<<0;
		return 0;
	}
	for (int i=0; i<t; i++)
	{
		cin>>m>>n;
		cout<<dg(m,n)<<endl;
	}
	return 0;
}

