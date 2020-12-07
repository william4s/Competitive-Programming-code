#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	char c;
	ll n,m;
	cin>>n>>c;
	m=floor(double(n)/2+0.5);
	for (ll i=1; i<=m; i++)
	{
		for (ll j=1; j<=n; j++)
			cout<<c;
		cout<<"\n";
	}
	return 0;
}



