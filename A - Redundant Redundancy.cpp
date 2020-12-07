#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
const int M=1e5;
ll n;
ll gcd(ll a,ll b)
{
	ll c;
	while(a%b!=0)
	{
		c=a%b;
		a=b;
		b=c;
	}
	return b;
}
ll lcm(ll a,ll b)
{
	return (a*b)/gcd(a,b);
}
int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	cin>>n;
	ll ans;
	ans=2;
	for (ll i=3;i<=n;i++)
	{
		ans=lcm(ans,i);
	}
	cout<<ans+1;
	return 0;
}



