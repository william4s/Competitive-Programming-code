#include<bits/stdc++.h>
using namespace std;

int main()
{
	long n,t=1;
	char ch;
	cin>>n>>ch;
	while(2*t*t-1<=n) t++;
	t-=1;
	for (int i=t; i>=1; i--)
	{
		for (int j=1; j<=(2*t-2*i)/2; j++)
			cout<<' ';
		for (int j=1; j<=2*i-1; j++)
			cout<<ch;

		cout<<"\n";
	}
	for (int i=2;i<=t;i++)
	{
		for (int j=1; j<=(2*t-2*i)/2; j++)
			cout<<' ';
		for (int j=1; j<=2*i-1; j++)
			cout<<ch;
	
		cout<<"\n";
	}
	cout<<n-2*t*t+1;
	return 0;
}

