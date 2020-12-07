#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;

int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n,a;
	while(cin>>n>>a)
	{
		ll ans;
		if ((n-1+a)%2==0)
			ans=(n-1+a)/2;
		else
			ans=(n-1+a)/2+1;
		cout<<ans<<"\n";		
	} 
	return 0;
}



