#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
ll l,r,ans,ans_num;
void check(ll x)
{
	if (x>r) return ;
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
	if (res<ans&&num<=r)
	{
		ans=res;
		ans_num=num;
	}

}
void dg(ll x,ll t)
{
	if (x>r)
		return ;
	ll gw=x%t;
	if (gw)
	{
		while(x%t&&x<=r)
		{
			x+=t/10;
			if (x<=r) check(x);
		}
	}
	dg(x,t*10);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll T;
	cin>>T;
	ans=INF;
	while(T--)
	{
		ans=INF;
		cin>>l>>r;
		ans_num=l;
		check(l);
		ll k=l;
		dg(k,10);
		cout<<ans_num<<"\n";

	}

	return 0;
}



