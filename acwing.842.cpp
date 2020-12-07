#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
ll path[10],n;
bool vis[10];
void dg(ll x)
{
	if (x>n)
	{
		for (ll i=1;i<=n;i++)
			cout<<path[i]<<' ';
		cout<<"\n";
		return ;
	}
	for (ll i=1;i<=n;i++)
	{
		if (!vis[i])
		{
			vis[i]=1;
			path[x]=i;
			dg(x+1);
			vis[i]=0;
		}
	}
}
int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

	cin>>n;
	dg(1);
	return 0;
}



