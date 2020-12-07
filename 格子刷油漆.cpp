#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
ll f[10][1010];
const ll MOD=1000000007;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll n;
	cin>>n;
	for (ll i=1; i<=2; i++)
		for(ll j=1; j<=n; j++)
			f[i][j]=1;

	for(ll i=1; i<=2; i++)
		for(ll j=1; j<=n; j++)
		{
			for(ll k=0; k<4; k++)
			{
				f[i][j]=(f[i-1][j]+f[i-1][j-1]+f[i-1][j+1]+f[i][j-1]+f[i][j+1]+f[i+1][j+1]+f[i+1][j]+f[i+1][j+1])%MOD;

			}
		}

	cout<<f[2][n];
	return 0;
}


