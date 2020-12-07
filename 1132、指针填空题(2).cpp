#include<bits/stdc++.h>
using namespace std;
int n;
int a[101];

void Reverse (int *p,int t)
{
	for (int i=0; i<t/2; i++)
		swap(p[i],p[t-i-1]);
}
int main()
{
	cin>>n;
	for (int i=0; i<n; i++)	cin>>a[i];
	Reverse(a,n);
	for (int i=0; i<n; i++)	cout<<a[i]<<" ";
	cout<<endl;
	cout<<"(1):p[i],p[t-i-1]";
	cout<<"(2):*(a+i)";
	cout<<"(3):*(a+i)";
	return 0;
}

