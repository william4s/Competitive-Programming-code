#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	ll n,ans=0;
	cin>>n;
	for(ll a =n;a>=1;a--)
	{
		for(ll b=n;b>=1;b--)
		{
			if (b%a==a/b)
			ans++;
		}
	}
	cout<<ans; 
	return 0;
}


