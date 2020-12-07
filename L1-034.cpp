#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
ll vis[1010];
int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	ll n,k;
	cin>>n;
	while(n--)
	{
		cin>>k;
		for (ll i=0;i<k;i++)
		{
			ll x;
			cin>>x;
			vis[x]++;
			
		}
	}
	ll maxn=-INF,ans;
	for (ll i=1;i<=1000;i++)
		if (vis[i]&&maxn<=vis[i])
		{
			ans=i;
			maxn=vis[i];
		}
	cout<<ans<<' '<<maxn<<"\n";
	return 0;
}



