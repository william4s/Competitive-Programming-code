#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
const int N=1e6+5;
struct Tree
{
	int fail=0;
	int vis[26];
	int end=0;
} ac[N];
ll cnt=0;
inline void build(string s)
{
	ll l=s.size();
	ll p=0;
	for (ll i=0;i<l;i++)
	{
		ll u=s[i]-'a';
		if (ac[p].vis[u]==0)
			ac[p].vis[u]=++cnt;
		p=ac[p].vis[u];
	}
	ac[p].end+=1;
}
void get_fail()
{
	queue<int> q;
	for (ll i=0;i<26;i++)
	{
		if (ac[0].vis[i]!=0)
		{
			ll k=ac[0].vis[i];
			ac[k].fail=0;
			q.push(ac[0].vis[i]);
		}	
	}
	while(!q.empty())
	{
		ll u=q.front();
		q.pop();
		for(ll i=0;i<26;i++)
		{
			if (ac[u].vis[i]!=0)
			{
				ac[ac[u].vis[i]].fail=ac[ac[u].fail].vis[i];
				q.push(ac[u].vis[i]);
			}
			else
				ac[u].vis[i]=ac[ac[u].fail].vis[i];
		}
	}
}
ll ac_query(string s)
{
	ll now=0,ans=0;
	for (ll i=0;i<s.size();i++)
	{
		
		now=ac[now].vis[s[i]-'a'];
		for (ll t=now;t&&ac[t].end!=-1;t=ac[t].fail)
		{
			ans+=ac[t].end;
			ac[t].end=-1;
		}
	}
	return ans;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll n;
	string s;
	cin>>n;
	for (ll i=0; i<n; i++)
	{
		cin>>s;
		build(s);
	}
	ac[0].fail=0;
	get_fail();
	cin>>s;
	cout<<ac_query(s)<<endl;

	return 0;
}



