#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
string isprime(ll x)
{
	if (x<2)
		return "No";
	for (ll i=2;i<=x/i;i++)
		if (x%i==0)
			return "No";
	return "Yes";
}
int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	ll n;
	cin>>n;
	while(n--)
	{
		ll t;
		cin>>t;
		cout<<isprime(t)<<"\n";
	}
	return 0;
}



