#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
const int N=2e5+5;
ll a[N];
int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n;
	while(cin>>n)
	{
		ll sum=0;ll x;
		for (ll i=0;i<=n;i++)
			cin>>a[i];
		for (ll i=n;i>=0;i--)
		{
			sum+=a[i];
			if (sum>=i)
			{
				cout<<i<<"\n";
				break;
			}
		}
	 } 
	return 0;
}



