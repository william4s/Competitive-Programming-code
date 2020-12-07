#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
struct stu
{
	ll t;
	
}
ll a[110],maxn=-1,t[50];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll n;
	cin>>n;
	for (ll i=1; i<=n; i++)
		cin>>a[i],maxn=max(maxn,a[i]);
	for (ll i=1; i<=n; i++)
		for (ll j=1; j<=a[i]; j++)
			t[j]++;
	

	return 0;
}



