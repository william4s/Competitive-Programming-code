#include<bits/stdc++.h>
using namespace std;
int n,a[2000]={0},ans=0;
int main(){
	cin>>n;
	for (int i=0;i<n;i++)
		{
			int t;
			cin>>t;
			a[t]+=1;
		}
	for (int i=0;i<=1000;i++)
	{
		if (a[i])
		{
			ans++;

	    }
	}
	cout<<ans<<endl;
	for (int i=0;i<=1000;i++)
	{
		if (a[i]) cout<<i<<endl;
	}
	return 0;
} 
