#include <bits/stdc++.h>
using namespace std;
int f(int m,int n)
{
	if (m>n)
		return f(n,n);
	if (n==1)
		return 1;
	if (m<=0) return 0;
	return f()
}
int main()
{
	int m,n;
	cin>>m; //´ó±ı
	cin>>n;//ÈËÊı
	if (n>m)
		cout<<0;
	if (n==m)
		cout<<1;
	else
		cout<<f(m-n,n);
}
