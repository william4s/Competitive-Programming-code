#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
struct stu
{
	string sfz;
	ll sj,ks;
} a[1010];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll n,M;
	cin>>n;
	for (ll i=1; i<=n; i++)
	{
		string s;
		ll w,e;
		cin>>s>>w>>e;
		a[w].sfz=s;
		a[w].ks=e;
	}

	cin>>M;
	while(M--)
	{
		ll k;
		cin>>k;
		cout<<a[k].sfz<<' '<<a[k].ks<<'\n';
	}
	return 0;
}


