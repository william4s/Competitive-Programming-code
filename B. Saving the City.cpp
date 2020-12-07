#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
struct seg
{
	ll l,r;
} se[1010];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll T;
	cin>>T;
	while(T--)
	{
		ll k=INF,ans=0;
		ll a,b;
		cin>>a>>b;
		string s;
		cin>>s;
		for (ll i=0;i<s.size();i++)
		{
			if (s[i]=='1')
			{
				ans+=min(a,b*k);
				k=0;
			}
			else
				k++;
		}
		cout<<ans<<"\n";
	}
	return 0;
}



