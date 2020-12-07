#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
const int max_n=1e5+5;
ll a[max_n],b[max_n],d[max_n];
int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	ll n,m,l,r,c,i,j;
	cin>>n>>m;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
		b[i]=a[i]-a[i-1];
	}
	while(m--)
	{
		cin>>l>>r>>c;
		b[l]+=c;
		b[r+1]-=c;
	}
	for(i=1;i<=n;i++)
	{
		d[i]=d[i-1]+b[i];
	}
	for(i=1;i<=n;i++)
		cout<<d[i]<<' ';
	return 0;
}


