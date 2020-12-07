#include<bits/stdc++.h>
using namespace std;
long a[30030];
int main()
{
	long n,i,j;
	cin>>n;
	for (int i=0; i<n; i++)
		cin>>a[i];
	for (int i=0; i<n; i++)
		cout<<a[i]<<' ';
	cout<<endl;
	for (int i=n-1;i>=0;i--)
		cout<<a[i]<<' ';
	return 0;
}

