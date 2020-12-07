#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
ll gcd(ll a,ll b)
{
	
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll T;
	cin>>T;
	while(T--)
	{
		ll n;
		cin>>n;
		for (ll i=2*n+2;i<=4*n;i+=2)
			cout<<i<<' ';
		cout<<"\n"; 
		
	}
	
	
	return 0;
}


