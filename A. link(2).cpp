#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
ll l,r,ans,ans_num;
void check(ll x)
{
	ll num=x;
	while(x%10==0)
	{
		x/=10;
	}
	ll cnt=0;
	ll t=x;
	while(t)
	{
		t/=10;
		cnt++;
	}
	ll res;
	if (x%10==5)
	{
		res=2*cnt-1;
	}
	else
		res=2*cnt;
	cout<<res<<",";

}
void dg(ll x)
{
	if (x>r)
		return ;
	check(x);
	ll gw=x%10;
	if (gw<5)
	{
		dg(x+(5-gw));
	}
	else
	{
		dg(x+(10-gw));
	}

}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	for (ll i=1; i<=999999999; i++)
	{
		check(i);
		//cout<<ans_num<<",";

	}
	return 0;
}



