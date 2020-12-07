#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
ll a[105][105],b[105][105],c[105][105];
ll n,m,q,w;
ll cal(ll x,ll y)
{
	ll ans=0;
	for(ll i=1;i<=m;i++)
	{
		ans+=a[x][i]*b[i][y];
	}
	return ans;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin>>n>>m;
	for (ll i=1; i<=n; i++)
	{
		for (ll j=1; j<=m; j++)
			cin>>a[i][j];
	}
	cin>>q>>w;
	for (ll i=1; i<=q; i++)
		for(ll j=1; j<=w; j++)
			cin>>b[i][j];
	if (m!=q)
	{
		cout<<"Error: "<<m<<" != "<<q<<endl;
		return 0;
	}
	for(ll i=1; i<=n; i++)
	{
		for(ll j=1; j<=w; j++)
			c[i][j]=cal(i,j);
	}
	cout<<n<<' '<<w<<endl;
	for (ll i=1;i<=n;i++)
	{
		for(ll j=1;j<=w;j++)
			if (j==1)cout<<c[i][j];
			else	cout<<' '<<c[i][j];
		cout<<endl;
	}
	return 0;
}



