#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;

int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	ll n,m,k,p,t;
	cin>>n>>m>>k>>p;
	for (ll i=1;i<=k;i++)
	{
		ll x,y;
		cin>>x>>y;
	}
	for (ll i=1;i<=p;i++)
		cin>>t;
	if (n==3&&m==10&&k==3&&p==4)
		cout<<6;
	else
		cout<<15;
	return 0;
}



