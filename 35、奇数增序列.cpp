#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,t,j=0,a[550];
	cin>>n;
	for (int i=0;i<n;i++)
	{
		cin>>t;
		if (t%2!=0)
			a[j++]=t;
	}
	sort(a,a+j);
	for (int i=0;i<j;i++)
		cout<<a[i]<<' ';
	return 0;
}
