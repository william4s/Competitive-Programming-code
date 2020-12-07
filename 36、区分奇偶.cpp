#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,w=0,q=0,n,a[1010],b[1010];
	cin>>n;
	for (int i=0;i<n;i++)
	{
		cin>>t;
		if (t%2==0)
		{
			b[w++]=t;
		}
		else
			a[q++]=t;
	}
	for (int i=0;i<q;i++)
		cout<<a[i]<<' ';
	cout<<endl;
	for (int i=0;i<w;i++)
		cout<<b[i]<<' ';
	
	return 0;
}
