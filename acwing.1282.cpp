#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
const int N=1e4+5,S=55,M=1e5+10;
int n;
int tr[N*S][26],cnt[N*S],idx;
string s;
int q[N*S],ne[N*S];
void insert()
{
	ll p=0;
	for (int i=0; i<s.size(); i++)\
	{
		ll t=s[i]-'a';
		if (!tr[p][t]) tr[p][t]=++idx;
		p=tr[p][t];

	}
	cnt[p]++;
}

void build()
{
	ll hh=0,tt=-1;
	for(ll i=0;i<26;i++)
		if (tr[0][i])
			q[++tt]=tr[0][i];
	while(hh<=tt)
	{
		ll t=q[hh++];
		for (ll i=0;i<26;i++)
		{
			ll p=tr[t][i];
			if (!p) 
				tr[t][i]=tr[ne[t]][i];
			else
			{
				ne[p]=tr[ne[t]][i];
				q[++tt]=p;
			}
		}
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll T=1;
	while(T--)
	{
		memset(tr,0,sizeof tr);
		memset(cnt,0,sizeof cnt);\
		memset(ne,0,sizeof ne);
		idx=0;
		cin>>n;
		for (ll i=0;i<n;i++)
		{
			cin>>s;
			insert();
		}
		build();
		cin>>s;
		ll res=0;
		for (ll i=0,j=0;i<s.size();i++)
		{
			ll t=s[i]-'a';
			j=tr[j][t];
			ll p=j;
			while(p)
			{
				res+=cnt[p];
				cnt[p]=0;
				p=ne[p];
			}
		}
		cout<<res<<"\n";
		
	}
	return 0;
}



