#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll n,ans=1;
	cin>>n;
	if (n>=0)
	{
		for (ll i=1; i<=n; i++)
			ans*=2;
		cout<<"2^"<<n<<"="<<ans;
	}
	else
	{
		for (ll i=1; i<=abs(n); i++)
			ans*=2;
		cout<<"2^"<<n<<" = "<<"1/"<<ans;
	}
	cout<<"\n";
	return 0;
}



