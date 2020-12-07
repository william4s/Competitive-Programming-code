#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
const int N=1e5+5;
ll a[N],b[N];
int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	ll n,m;
	cin>>n>>m;
	for (ll i=0;i<n;i++)	
		cin>>a[i];
	for (ll i=0;i<m;i++)
		cin>>b[i];
	ll l=0,r=0;
	while(l<n&&r<m)
	{
		if (a[l]==b[r])
			l++,r++;
		else
			r++;
	}
	if (l==n)
		cout<<"Yes\n";
	else
		cout<<"No\n";
	
	
	return 0;
}



