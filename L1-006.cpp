#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
ll a[100010];
bool isprime(ll x)
{
	if (x<2)
		return 0;
	for (ll i=2;i<=x/i;i++)
		if (x%i==0)
			return 0;
	return 1;
}
int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	ll n,mi=INF,sum=1,ansx,ansl=-1;
	cin>>n;
	if (isprime(n))
	{
		cout<<1<<'*'<<n;
		return 0;
	}
	for (ll i=13;i>=2;i--)
	{
		bool flag=0;
		sum=1;
		ll cnt=0;
		for (ll start=2;start<=n/start;start++)
		{
			ll k=1;
			ll tmp=start;
			while(k<n)
			{
				k*=tmp;
				++tmp;
				if (tmp-start==i)
					break;
			}
			if ((tmp-start==i)&&n%k==0)
			{
				flag=1;
				ansx=start;
				break;
			}
			
		}
		if (flag)
		{
			ansl=i;
			break;
		}
		
	}
	if (ansl!=-1)
	{
		cout<<ansl<<'\n';
		for (ll i=ansx;i<ansx+ansl;i++)
			if (i==ansx)
				cout<<i;
			else
				cout<<'*'<<i;
	}
	return 0;
}


