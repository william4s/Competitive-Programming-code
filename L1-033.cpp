#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
string ye;
ll vis[15];
ll check(ll x)
{
	memset(vis,0,sizeof vis);
	ye="";
	ll n=x,ans=0;
	while(n)
	{
		ll x=n%10;
		n/=10;
		ye+=char(x+'0');
	}
	if (x<10) ye=ye+"000";
	else if (x<100) ye+="00";
	else if (x<1000) ye+="0";
	for (ll i=0; i<ye.size(); i++)
	{
		if (!vis[ye[i]-'0'])
			ans++;
		vis[ye[i]-'0']++;
	}
	reverse(ye.begin(),ye.end());
	return ans;

}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll y,n,cnt=0;
	cin>>y>>n;
	ll st=y;
	while(1)
	{
		if (check(st)==n)
		{
			cout<<st-y<<' '<<ye<<'\n';
			return 0;
		}
		st++;

	}
	return 0;
}



