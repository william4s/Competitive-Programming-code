#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m;
ll zh(string s)
{
	ll ans=0,k=1;
	for (int i=n-1;i>=0;i--)
	{
		if (s[i]=='n') //1
		{
			ans+=k;
		}
		k*=2;
	}
	ans+=1;
	return ans;
}
int main(){

	cin>>n>>m;
	while(m--)
	{
		string s;
		cin>>s;
		cout<<zh(s)<<endl;
	}
	
	
	
	return 0;
}
