#include<bits/stdc++.h>
using namespace std;
const int INT=0x3f3f3f3f;
typedef long long ll;
void fun(ll x)
{
	ll n=x;
	for (ll i=2;i<=x/i;i++)
	{
		if (x%i==0)
		{
			ll cnt=0;
			while(x%i==0)
			{
				cnt++;
				x/=i;
			}
			//cout<<"x:"<<x<<"\n";
			cout<<i<<' '<<cnt<<"\n";
		}
	}
	if (x>1)
		cout<<x<<' '<<1<<"\n";
	cout<<"\n";
	
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll n;
	cin>>n;
	for (ll i=0;i<n;i++)
	{
		ll x;
		cin>>x;
		fun(x);
	}
	
	return 0;
}
