#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
struct stu
{
	ll rmb,nor,rew;
	bool fst=0;
} a[10];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	a[0].rmb=1;a[0].rew=8;
	a[1].rmb=6;a[1].rew=18;
	a[2].rmb=28;a[2].rew=28;
	a[3].rmb=88;a[3].rew=58;
	a[4].rmb=198;a[4].rew=128;
	a[5].rmb=328;a[5].rew=198;
	a[6].rmb=648;a[6].rew=388;
	for (ll i=0; i<7; i++)
		a[i].nor=10*a[i].rmb;
	ll n;
	cin>>n;
	ll res=n;
	ll dp[3000];
	for (ll i=0;i<7;i++)
	{
		for (ll j=n;j>=a[i].rmb;j--)
			dp[j]=max(dp[j],dp[j-a[i].rmb]+a[i].nor+a[i].rew);
		for (ll j=a[i].rmb;j<=n;j++)
			dp[j]=max(dp[j],dp[j-a[i].rmb]+a[i].nor);
	}
	cout<<dp[n]<<"\n"; 

	return 0;
}



