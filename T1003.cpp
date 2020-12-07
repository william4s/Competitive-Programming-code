#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF=0x3f3f3f3f;
const ll max_m=2e6+5;
ll k;
int a[max_m];


int main()
{
	int T;
	//cin>>T;
	scanf("%d",&T);
	while(T--)
	{
		ll n,m,l=-1,r=-1,minn=INF;
		ll ans=0;
		scanf("%lld%lld%lld",&n,&m,&k);
		ans+=k-1;
		ll x;
		for (ll i=0; i<m; i++)
		{
			scanf("%d",&x);
			if (minn>x)
				minn=x;
			ans+=abs(x-k)*2;
		}
		ans+=k-1;
		if (minn<k)
		{
			ans-=(k-minn)*2;
		}
		printf("%lld\n",ans);
	}

	return 0;
}


