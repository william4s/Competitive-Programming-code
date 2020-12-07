#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
ll a[110],b[110];

int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	ll T;
	cin>>T;
	while(T--)
	{
		memset(b,0,sizeof(b));
		ll n;
		cin>>n;
		for (ll i=1;i<=n;i++)
			cin>>a[i];
	
		for (ll i=1;i<=n/2;i++)
		{
			ll t=a[2*i-1]*a[2*i];
			b[2*i-1]=-t/a[2*i-1];
			b[2*i]=t/a[2*i];
		}
		for (ll i=1;i<=n;i++)
				cout<<b[i]<<' ';
			cout<<'\n';
		
		
		
		
	}
	return 0;
}



