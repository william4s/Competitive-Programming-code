#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
const int N=2e6+5;
const int M=1414215;
ll ans,n;
ll s_d[N],s_m[N];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll T;
	for (ll i=1;i<=M;i++)
	{
		s_d[i]=s_d[i-1]+i;
		s_m[i]=s_m[i-1]+i*i;
	}
	cin>>T;
	while(T--)
	{
		ll k;
		cin>>k;
		ll pos=lower_bound(s_d+1,s_d+M,k)-s_d;
		if (s_d[pos]==k)
			cout<<s_m[pos]+(k-s_d[pos])*(pos+1)<<"\n";
		else
		{
			pos-=1;
			cout<<s_m[pos]+(k-s_d[pos])*(pos+1)<<"\n";
		}
		
	}
	
	return 0;
}



