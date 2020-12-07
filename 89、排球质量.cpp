#include<bits/stdc++.h>
using namespace std;

int main(){
	long n,t,min,ans=0,bh;
	min=INT_MAX;
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		cin>>t;
		if (abs(t)<abs(min))
			{min=t; bh=i;}
		if (t==0) ans++;
	}
	if (ans==0)cout<<ans<<endl<<bh;
	else cout<<ans;
	
	return 0;
}
