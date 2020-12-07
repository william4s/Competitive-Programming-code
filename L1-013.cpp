#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll n,ans=0,t=1;
	cin>>n;
	for (ll i=1; i<=n; i++)
	{
		t*=i;
		ans+=t;
		//cout<<i<<' '<<ans<<endl;
	}
	cout<<ans<<endl;
	return 0;
}



