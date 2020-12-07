#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
const int N=2e5+10;
ll a[N],b[N];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll T;
	cin>>T;
	while(T--)
	{
		ll n;
		cin>>n;
		b[0]=b[1]=0;
		ll res=0;
		for (int i=1; i<=n; i++)
		{
			cin>>a[i];
			b[i]=abs(a[i]-a[i-1]);
			if (i>1)
				res+=b[i];
		}
		b[1]=0;
		ll ans=res;
		b[n+1]=b[n-1];
		for(int i=1; i<=n; i++)
		{
			ans=min(ans,res-b[i]-b[i-1]+abs(a[i+1]-a[i-1]));
		}
		cout<<ans<<endl;

		//cout<<MAX<<endl;
		//for (int i=1;i<=n;i++) cout<<b[i]<<' ';
		//cout<<endl;


	}
	return 0;
}


