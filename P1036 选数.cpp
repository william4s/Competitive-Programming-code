#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
const int N=25;
ll n,k,ans;
ll a[N];
bool check(ll x)
{
	if (x<2)	
		return 0;
	for (ll i=2;i<=x/i;i++)
		if (x%i==0)
			return 0;
	return 1;
}
void dfs(ll i,ll kt,ll sum)
{
	if (kt==k)
	{
		if (check(sum))
			ans++;
	}
	for (ll j=i+1;j<=n;j++)
		dfs(j,kt+1,sum+a[j]);
	
}
int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	cin>>n>>k;
	for (ll i=1;i<=n;i++)	cin>>a[i];
	for (ll i=1;i<=n-k+1;i++)
	{
		dfs(i,1,a[i]);
	}
	cout<<ans;
	return 0;
}


