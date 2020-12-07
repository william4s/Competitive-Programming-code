#include<bits/stdc++.h>
using namespace std;

int main(){
	long i,j,n,a,b,c,ans=0;
	cin>>n;
	cin>>a>>b>>c;
	for (i=1;i<=n;i++)
	{
		if (i%a!=0&&i%b!=0&&i%c!=0) ans++;
	}
	cout<<ans;
	return 0;
}
