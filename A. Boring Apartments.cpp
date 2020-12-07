#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;

int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	ll T;
	cin>>T;
	while(T--)
	{
		ll k=0,n,t,p;
		cin>>t;
		p=t%10;
		n=t;
		while(n)
		{
			k++;
			n/=10;
		}
		ll ans=(1+k)*k/2+(p-1)*10;
		cout<<ans<<'\n';
	}
	return 0;
}


