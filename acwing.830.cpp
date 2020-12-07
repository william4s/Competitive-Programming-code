#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
const int N=1e5+5;
ll stk[N],hh,tt=0;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll n;
	cin>>n;
	for (ll i=0; i<n; i++)
	{
		ll x;
		cin>>x;
		while(tt&&stk[tt]>=x) tt--;
		if (!tt)
			cout<<"-1 ";
		else
			cout<<stk[tt]<<' ';
		stk[++tt]=x;
	}
return 0;
}



