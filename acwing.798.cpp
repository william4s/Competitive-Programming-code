#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
const int max_n=1e3+5;
ll a[max_n][max_n],b[max_n][max_n],d[max_n][max_n];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll i,j,k,n,m,q,x1,x2,y1,y2,c;
	cin>>n>>m>>q;
	for(i=1; i<=n; i++)
		for(j=1; j<=m; j++)
		{
			cin>>a[i][j];
			b[i][j]=a[i][j]-a[i][j-1];
		}
	while(q--)
	{
		cin>>x1>>y1>>x2>>y2>>c;
		for(i=x1;i<=x2;i++)
		{
			b[i][y1]+=c;
			b[i][y2+1]-=c;
		}
		
			
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			d[i][j]=d[i][j-1]+b[i][j];
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			cout<<d[i][j]<<' ';
		}
		cout<<"\n";
	}
	return 0;
}


