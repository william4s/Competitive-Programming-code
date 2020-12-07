#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
const int max_n=1e5+5;
ll a[max_n];// c whilte d black
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll t;
	cin>>t;
	while(t--)
	{
		memset(a,0,sizeof(a));
		ll n,k,cnt=0,x;
		cin>>n>>k;
		for(ll i=0; i<n; i++)
		{
			cin>>x;
			if (x*2==k)
				a[i]=(cnt++)%2;
			else if (x*2<k)
				a[i]=1;
		
		}
		for(ll i=0; i<n; i++)
			cout<<a[i]<<' ';
		cout<<"\n";
	}
	return 0;
}


