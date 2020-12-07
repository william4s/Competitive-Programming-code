#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
const int N=1e4+5;
ll tr[N*40][10],cnt[N*40],idx;
string ss[N];
void insert(string s)
{
	ll p=0;
	for (ll i=0; i<s.size(); i++)
	{
		int u=s[i]-'0';
		if (!tr[p][u]) tr[p][u]=++idx;
		p=tr[p][u];
	}
	cnt[p]=1;
}
bool query(string s)
{
	ll p=0;
	for (ll i=0; i<s.size()-1; i++)
	{
		int u=s[i]-'0';
		p=tr[p][u];
		if (cnt[p]==1)
		{
			//cout<<s<<endl;
			return 0;
		}
	}
	return 1;
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
		idx=0;
		memset(tr,0,sizeof(tr));
		memset(cnt,0,sizeof(cnt));
		ll n;
		cin>>n;
		for (ll i=1; i<=n; i++)
		{
			cin>>ss[i];
			insert(ss[i]);
		}
		bool pd=1;
		for (ll i=1; i<=n; i++)
		{
			if (query(ss[i])==0)
			{
				pd=0;
				break;
			}
		}
		if (pd==0)
			cout<<"NO\n";
		else
			cout<<"YES\n";
	}


	return 0;
}
