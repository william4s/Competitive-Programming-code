#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
ll n;
char s[15][15];
bool c[30],xx[30],fxx[30];
void dg(ll x)
{
	if (x>n)
	{
		for(ll i=1;i<=n;i++)
		{
			for(ll j=1;j<=n;j++)
				cout<<s[i][j];
			cout<<endl;
		}
		cout<<"\n";
		return ;
	}
	for (ll i=1; i<=n; i++)
	{
		if (!c[i]&&!xx[x+i-1]&&!fxx[n-x+i-1])
		{
			c[i]=xx[i+x-1]=fxx[n-x+i-1]=1;
			s[x][i]='Q';
			dg(x+1);
			s[x][i]='.';
			c[i]=xx[i+x-1]=fxx[n-x+i-1]=0;
		}
	}
}
int main()
{
	/*	ios::sync_with_stdio(false);
	    cin.tie(0);
	    cout.tie(0);
	*/

	cin>>n;
	for (ll i=1; i<=n; i++)
		for(ll j=1; j<=n; j++)
			s[i][j]='.';
	dg(1);
	
	return 0;
}



