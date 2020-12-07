#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
ll ans=0;
bool check(ll x)
{
	while(x)
	{
		ll t=x%10;
		if (t==2||t==4)
			return 0;
		x/=10;
	}
	return 1;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	for(ll i=1; i<=2019; i++)
	{
		if (check(i))
			for(ll j=i+1; j<=2019; j++)
			{
				if (check(j))
				{
					ll k=2019-i-j;
					if (k>i&&k>j&&check(k))
						ans++;
				}

			}
	}
	cout<<ans;
	return 0;
}


