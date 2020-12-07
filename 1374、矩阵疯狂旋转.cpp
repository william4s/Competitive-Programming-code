#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
const int N=210;
ll a[N][N];
ll n,m,k;
void c1()
{
	for (ll i=1; i<=n; i++)
	{
		for (ll j=1; j<=m; j++)
			cout<<a[i][j]<<' ';
		cout<<"\n";

	}
}
void c2()
{
	for (ll j=1; j<=m; j++)
	{
		for(ll i=n; i>=1; i--)
			cout<<a[i][j]<<' ';
		cout<<'\n';
	}
}
void c3()
{
	for(ll i=n; i>=1; i--)
	{
		for(ll j=m; j>=1; j--)
			cout<<a[i][j]<<' ';
		cout<<'\n';
	}

}
void c4()
{
	for(ll j=m; j>=1; j--)
	{
		for(ll i=1; i<=n; i++)
			cout<<a[i][j]<<' ';
		cout<<'\n';
	}

}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m>>k;
	for (ll i=1; i<=n; i++)
		for(ll j=1; j<=m; j++)
			cin>>a[i][j];
	k=k%4;
	ll x,y;
	if (k==0)
	{
		c1();
	}
	else if (k==1)
	{
		c2();
	}
	else if(k==2)
	{
		c3();
	}
	else
		c4();



	return 0;
}


