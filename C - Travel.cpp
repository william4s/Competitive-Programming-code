#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
ll a[15][15];
ll n,k,ans;
bool vis[10];
void dfs(ll t,ll bh,ll sum)
{
	if (t>=n)
	{
		//cout<<bh<<endl;
		sum+=a[bh][1];
		if (sum==k)
			ans++;
		sum-=a[bh][1];
		return ;
	}
	for (ll i=2;i<=n;i++)
	{
		if (vis[i]==0)
		{
			vis[i]=1;
			sum+=a[bh][i];
			dfs(t+1,i,sum);
			sum-=a[bh][i];
			vis[i]=0;
		}
	}
}

int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	
	cin>>n>>k;
	for (ll i=1;i<=n;i++)
		for (ll j=1;j<=n;j++)
			cin>>a[i][j];
	dfs(1,1,0);
	cout<<ans<<endl;
	return 0;
}



