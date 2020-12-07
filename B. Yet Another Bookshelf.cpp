#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
int a[100];
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
		bool pd1=0,pd0=0,pd=0;
		ll ans=0;
		cin>>n;
		for (ll i=1; i<=n; i++) cin>>a[i];
		
		ll i=1,j=n;

		while(a[j]==0)
		{
			j--;
		}
		while(a[i++]==0);
		for (ll l=i; l<=j; l++)
			if (a[l]==0)
				ans++;

		if (i>=j)
			cout<<"0\n";
		else
			cout<<ans<<'\n';



	}
	return 0;
}


