#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
ll lowbit(ll x)
{
	return x&(-x);
}
int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	ll n;
	cin>>n;
	for(ll i=0;i<n;i++)
	{
		ll x,cnt=0;
		cin>>x;
		while(x) x-=lowbit(x),cnt++;;
		cout<<cnt<<" ";
	}
	return 0;
}



