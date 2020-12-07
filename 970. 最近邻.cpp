#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
const int N=1e6+5;
ll a[N];
int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	ll n,m;
	cin>>n>>m;
	for (ll i=0;i<n;i++) 
	{
		ll x;
		cin>>x;
		a[x]=1;
	}
	for (ll i=0;i<m;i++)
	{
		ll t;
		cin>>t;
		ll p=0;
		while(a[abs(t+p)]!=1||a[abs(t-p)]!=1)
		{
			p++;
		}
		if (a[t+p]==a[t-p])
			cout<<t-p<<"\n";
		else
			cout<<t+p<<"\n*";
			
	}
	return 0;
}



