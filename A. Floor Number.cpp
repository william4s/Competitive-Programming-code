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
		ll n,x,ans=1,t;
		cin>>n>>x;
		while(((ans-1)*x+2)<n)
		{
			ans++;
		}
		cout<<ans<<"\n";
	}
	return 0;
}


