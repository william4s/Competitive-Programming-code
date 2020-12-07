#include<bits/stdc++.h>
using namespace std;
const int INT=0x3f3f3f3f;
typedef long long ll;
ll a[110];
bool is_prime(ll n)
{
	if (n<2)
		return 0;
	for (ll i=2;i<=n/i;i++)
		if (n%i==0)
			return 0;
	
	return 1;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll n;
	cin>>n;
	for (ll i=0;i<n;i++)
	{
		ll x;
		cin>>x;
		if (is_prime(x))
			cout<<"Yes\n";
		else
			cout<<"No\n";
	}
	
	
	return 0;
}
