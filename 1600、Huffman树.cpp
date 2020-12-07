#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
const int N=1e5+5;
ll a[N];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll n;
	ll ans=0;
	priority_queue<ll,vector<ll>,greater<ll> > q;
	cin>>n;
	for (ll i=1; i<=n; i++)
	{
		ll x;
		cin>>x;
		q.push(x);
		ans+=x;
	}
	while(q.size()!=2)
	{
		ll a=q.top();
		q.pop();
		ll b=q.top();
		q.pop();
		ans+=a+b;
		q.push(a+b);
	}
	cout<<ans;  
	return 0;
}



