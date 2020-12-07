#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
ll f[1010];
ll v[1010],w[1010];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll n,m;
	cin>>m>>n;
	for(ll i=1;i<=n;i++)	cin>>v[i]>>w[i];
	for(ll i=1;i<=n;i++)
		for(ll j=v[i];j<=m;j++)
		{
		
			
				f[j]=max(f[j],f[j-v[i]]+w[i]); 
		}
	cout<<f[m];
}
