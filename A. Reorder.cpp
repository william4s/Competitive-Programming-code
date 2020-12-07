#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
ll a[110];
int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	ll T;
	cin>>T;
	while(T--)
	{
		ll n,m,sum=0,x;
		cin>>n>>m;
		for (ll i=0;i<n;i++)
		{
			cin>>x;
			sum+=x;
		}
		if (sum==m)
			cout<<"YES\n";
		else
			cout<<"NO\n";
		
	}
	return 0;
}



