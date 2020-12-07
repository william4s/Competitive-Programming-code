#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
const int N=1e2+10;
const int M=1e3+10;
ll n,m,t,ans;
ll a[N][50],b[N][50];
int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	cin>>n>>m>>t;
	ans=m;
	for (ll i=1;i<=n;i++)
	{
		for (ll j=1;j<=t;j++)
			cin>>a[i][j];
	}
	for (ll i=1;i<=n;i++)
	{
		for(ll j=1;j<t;j++)
		{
			b[i][j]=a[i][j+1]-a[i][j];
		}
	}
	ll gp_i=0,gp_k=0,res=0;
	for (ll j=1;j<=t;j++)
	{
		ans+=(a[gp_i][j]-a[gp_i][j-1])*gp_k;
		
	//	cout<<"day_"<<j<<" i: "<<gp_i<<" k: "<<gp_k<<' '<<ans<<" res: "<<res<<endl;
		res=-INF;
		if (j==t)
			break;
		for (ll i=1;i<=n;i++)
		{
			if (res<(ans/a[i][j])*b[i][j])
			{
				res=(ans/a[i][j])*b[i][j];
				gp_i=i;gp_k=ans/a[i][j];
			}
		}

			
		
	}

	cout<<ans<<endl;
	
	
	return 0;
}



