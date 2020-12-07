#include<bits/stdc++.h>
using namespace std;

int main(){
	long t,n,ans=0;
	cin>>n;
	while(n)
	{
		t=n%10;
		if (t%2==0)
			ans+=t;
	}
	cout<<ans;
	return 0;
}

