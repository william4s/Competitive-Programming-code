#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
long long sum,n;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	while(cin>>n)
	{
		char ch;
		ll a[300];
		memset(a,0,sizeof(a));
		for (ll i=0;i<n;i++)
		{
			cin>>ch;
			a[ch]++;
		}
		ll y=n*n*n*n;
		ll x=a['a']*a['v']*a['i']*a['n'];
		ll gcd=__gcd(x,y);
		cout<<x/gcd<<"/"<<y/gcd<<"\n";
	}
	return 0;
}
