#include<bits/stdc++.h>//补题QAQ 
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
const int N=105;
const int MOD=1e9+7;
ll a[N],dp[N][2*N];
int pd[2]={-1,1};
int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	ll n,k,m;
	cin>>n>>k>>m;
	for (ll i=1;i<=n;i++)
		cin>>a[i];
	dp[0][k]=1;//initialization
	//dp[第几个][平衡力]
	for (ll i=1;i<=m;i++)
		for (ll j=0;j<=2*k;j++)
		{
			for (ll l=1;l<=n;l++)
			{
				ll tem=j+pd[i%2]*a[l];
				if (tem>=0&&tem<=2*k)
					dp[i][tem]=(dp[i-1][j]+dp[i][tem])%MOD;//选第i个时，平衡力为j（k为零点），选之前的状态是dp[i-1][j] 
				
			}
		}
	ll sum=0;
	for(ll i=0;i<=2*k;i++)
		sum=(sum+dp[m][i])%MOD;
	cout<<sum;
	return 0;
}


