#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
const ll max_n=3e5+5;
ll a[max_n];
int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,q,ans=0;
		cin>>n>>q;
		for(ll i=1;i<=n;i++)
			cin>>a[i];
		ll l=0,r=0;	
		for(ll i=1;i<=n;i++)
		{
			if (i==1)
				l=a[i];
			else
			{
				if (a[i-1]<a[i])
				{
					if (l&&r)
						ans+=l-r;
					l=a[i];
					r=0;
				}
				else
					r=a[i];
			}
		}
		ans+=l;
		cout<<ans<<"\n";
		
	}
	return 0;
}


