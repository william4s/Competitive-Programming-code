#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
const int max_n=5e4;
ll a[max_n];
int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	ll T;
	cin>>T;
	while(T--)
	{
		ll n,ans=0;
		cin>>n;
		for(ll i=0;i<n;i++)
		{
				cin>>a[i]; 
		}
		bool pd=0;
		for(ll i=1;i<n;i++)
			if (a[i-1]<=a[i])
				{
					pd=1;
					break;
				}
		if (pd)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	return 0;
}


