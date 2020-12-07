#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
const int MAX=1e5+5;
bool vis[MAX];

int main()
{

	ll n,k,m;
	cin>>n;
	for (ll i=1; i<=n; i++)
	{
		ll t;
		cin>>k;
		if(k>1)
		{

			for (ll j=0; j<k; j++)
			{
				cin>>t;
				vis[t]=1;
			}
		}
		else
		{
			cin>>t;
		}
	}
	cin>>m;
	bool pd=1;
	for (ll i=0; i<m; i++)
	{
		ll t;
		cin>>t;
		if (!vis[t])
		{
			if (!pd)	cout<<" ";
			printf("%05d",t);
			vis[t]=1;
			pd=0;
		}
	}
	if (pd)
		cout<<"No one is handsome";
	return 0;
}



