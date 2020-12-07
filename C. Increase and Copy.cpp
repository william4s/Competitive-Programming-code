#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
ll a[70000];
int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	ll T;
	cin>>T;
	while(T--)
	{
		ll t,sum=1,ans=0,n;
		cin>>n;
		ans=ceil(2*(sqrt(n)))-2;
		cout<<ans<<"\n"; 
	}
	return 0;
}


