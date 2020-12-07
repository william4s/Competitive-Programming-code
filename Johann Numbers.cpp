#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
const int N=1e9+5;
bool vis[N];
int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	ll x;
	cin>>x;
	vis[x]=1;
	ll ans=1;
	while(1)
	{
		if (x%5!=0)
		{
			x+=2;
		}
		else
			x/=5;
		if (!vis[x])
		{
			vis[x]=1;
			ans++;
		}
		else
			break;
	}
	cout<<ans;
	return 0;
}


