#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
ll a[110],n;
ll maxn=1,ans;
bool dp[10010];
ll gcd(ll a,ll b)
{
	ll c;
	while(b)
	{
		c=a%b;
		a=b;
		b=c;
	 } 
	 return a;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	memset(dp,0,sizeof(dp));
	ll i,j,k,ans=0;
	cin>>n;
	for (i=0; i<n; i++)
	{
		cin>>a[i];
	}
	k=a[0];
	for (ll i=1;i<n;i++)
		k=gcd(k,a[i]);

	if (k>1) //都不互质 
	{
		cout<<"INF";
		return 0;
	}
	sort(a,a+n);
	dp[0]=1;
	for(ll i=1;i<=10000;i++)//枚举组合的数 
	{
		for(ll j=0;j<n&&a[j]<=i;j++)
		{
			if (dp[i-a[j]])
			{
				dp[i]=1;
				break;	
			}
		}
	}
	for (ll i=1;i<=10000;i++)
	{
		if (!dp[i])
		{
			ans++;
			//cout<<i<<' ';
		}
	} 
	cout<<ans;
	return 0;
}
