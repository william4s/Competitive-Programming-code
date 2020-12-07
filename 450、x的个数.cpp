#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,x,ans=0;
	cin>>n>>x;
	while(n)
	{
		if (n%10==x)
			ans++;
		n/=10;
		
	}
	cout<<ans;
	return 0;
}

