#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
const int N=1e6+5;
ll a[N];
int vis[N];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll n,m;
	cin>>n>>m;
	for (ll i=1; i<=n; i++)
	{
		cin>>a[i];
		
	
	}
	ll ans=n,cnt=0,l,r;
	for (ll j=1,i=1;j<=n;j++)
	{
		if (vis[a[j]]==0)
			cnt++;
		vis[a[j]]++;
		while(1)
		{
			if (vis[a[i]]>1)
			{
				vis[a[i++]]--;
			}
			else if (vis[a[i]]==1)
				break;
		}
		if (cnt==m&&j-i+1<ans)
		{
			ans=j-i+1;
			l=i;r=j;
			//cout<<i<<' '<<j<<' '<<cnt<<endl;
		}
		
	}
	if (ans!=n)
		cout<<l<<' '<<r;
	else
		cout<<'1'<<' '<<n;
	
	
		
	return 0;
}


