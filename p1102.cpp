#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
const int N=2e5+5;
ll a[N];
unordered_map<ll,int> b; 
int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	ll n,c;
	cin>>n>>c;
	for (ll i=1;i<=n;i++)
	{
		cin>>a[i];
		b[a[i]-c]++;
	}
	ll cnt=0;
	for (ll i=1;i<=n;i++)
	{
		cnt+=b[a[i]];
	}
	cout<<cnt;
	return 0;
}



