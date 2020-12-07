#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
ll a[110];
int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	ll n,x,ans;
	cin>>n;
	for (ll i=0;i<n;i++)
	{
		cin>>a[i]; 
	}
	ll maxn=-INF,cnt;
	for (ll i=2;i<=1000;i++)
	{
		cnt=0;
		for (ll j=0;j<n;j++)
			if (a[j]%i==0)
				cnt++;
		if (maxn<cnt)
		{
			maxn=cnt;
			ans=i;
		}
	}
	cout<<ans;
	return 0;
}



