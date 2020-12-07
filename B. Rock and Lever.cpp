#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
int a[1000000+5];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,maxn=-INF,ans=0;
		
		cin>>n;
		ll k=1,r=2;
		for(ll i=0; i<n; i++)
		{
			cin>>a[i];	
		}
		for(ll j=30;j>=0;j--)
		{
			ll cnt=0;
			for(ll i=0;i<n;i++)
			{
				if (a[i]>=(1<<j)&&a[i]<(1<<(j+1)))
					cnt++;
			}
			ans+=cnt*(cnt-1)/2;
		}
		cout<<ans<<"\n";
	}
	return 0;
}


