#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef unsigned long long ll;
ll b[2020][2020];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll n,kk;
	cin>>kk>>n;

	for (ll i=1; i<=n; i++)
	{
		for (ll j=1; j<=n; j++)
		{
			ll x;
			cin>>x;
			b[i][j]=b[i-1][j]+b[i][j-1]-b[i-1][j-1]+x;
		}
	}
	for (ll i=1; i<=n; i++)
	{
		for (ll j=1; j<=n; j++)
		{
			for (ll k=i; k<=n; k++)
			{
				for (ll l=j; l<=n; l++)
				{
					ll x1=i,y1=j,x2=k,y2=l;
					ll tem=b[x2][y2]-b[x1-1][y2]-b[x2][y1-1]+b[x1-1][y1-1];
					if (tem>=kk&&tem<=2*kk)
					{
						cout<<j<<' '<<i<<' '<<l<<' '<<k;//<<endl<<tem;
						return 0;
					}
				}
			}

		}
	}
	cout<<"NIE";
	return 0;
}



