#include<bits/stdc++.h>
using namespace std;
long ans=1,t;
int main(){
	int a[15];
	int n;
	cin>>n;
	for (int i=0;i<n;i++)
	{
		cin>>t;
		ans*=t/__gcd(t,ans);
		
	}
	cout<<ans;
	
	return 0;
}
