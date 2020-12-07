#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
ll s[1010][1010],x;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll i,j,k,q,m,n;
	cin>>n>>m>>q;
	for(i=1; i<=n; i++)
		for(j=1; j<=m; j++)
		{
			cin>>x;
			s[i][j]=s[i-1][j]+s[i][j-1]-s[i-1][j-1]+x;

		}
	for(i=0; i<q; i++)
	{
		int x1,y1,x2,y2;
		cin>>x1>>y1>>x2>>y2;
		cout<<s[x2][y2] - s[x2][y1 - 1] - s[x1 - 1][y2] + s[x1 - 1][y1 - 1]<<'\n';


	}
	return 0;
}


