#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,t;
	int b[2020],a[110]={0};
	cin>>n;
	for (int i=0;i<n;i++)
	{
		cin>>t;
		if (a[t]==0)
			{
				cout<<t<<' ';
				a[t]=1;
			}	
	}
/*	for (int i=0;i<n;i++)
		if (a[b[i]]==i)	
			cout<<b[i]<<' '; */
	return 0;
}
