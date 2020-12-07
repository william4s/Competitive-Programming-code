#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
const long long max_n=2e5+5;
ll maxn=-INF,ans;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll x,sum=0,n=0;
	cin>>x;
	ll t=2,cnt=1;//从深度1开始
	for (ll i=1;i<=x;i++)
	{
		ll temp;
		cin>>temp;
		sum+=temp;
		if ((i+1)%t==0)
		{
			t*=2;
			if (sum>maxn)
			{
				maxn=sum;
				ans=i+1;
			}
			sum=0;
		}
		
	}
	cnt=0;
	while(ans!=1)
	{
		cnt++;
		ans/=2;
	}

	
	cout<<cnt<<' '<<maxn;
	return 0;
}


