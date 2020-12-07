#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
const int max_n=1e5+5;
ll minn=INF;
unsigned int a[max_n]; 
int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	ll n;
	cin>>n;
	for (ll i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	ll x=a[1]-a[0],y,z,d=INF;
	for(ll i=0;i<n-1;i++)
	{
		y=a[i+1]-a[i];
		z=__gcd(y,x);
		if (z<d)
			d=z;
		
	}
	cout<<(a[n-1]-a[0])/d+1;
	return 0;
}


