#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
ll a[4][4];
int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	ll T;
	cin>>T;
	while(T--)
	{
		ll n,m;
		int pd=0;
		cin>>n>>m;
		if (m%2!=0)
		{
		//	cout<<"NO\n";
			pd=2;
		}
		for(ll s=1;s<=n;s++)
		{
			for(ll i=1;i<=2;i++)
				for(ll j=1;j<=2;j++)
				cin>>a[i][j];
			if (a[1][2]==a[2][1]&&pd!=2)
				pd=1;
		}
		if (pd==1)
			cout<<"YES\n";
		else
			cout<<"NO\n";
		
	}
	return 0;
}


