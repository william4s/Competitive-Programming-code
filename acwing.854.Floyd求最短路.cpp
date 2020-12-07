#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
const int N=220;
int n,m,k;
int G[N][N];
int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	cin>>n>>m>>k;
	for (int i=0;i<m;i++)
	{
		int x,y,z;
		cin>>x>>y>>z;
		G[x][y]=min(G[x][y],z);
	}
	for (int i=1;i<=n;i++)
		for (int j=1;j<=n;j++)
		if (i==j) G[i][j]=0;
		else G[i][j]=INF;
		
	for (int k=1;k<=n;k++)
		for (int i=1;i<=n;i++)
			for (int j=1;j<=n;j++)
				G[i][j]=min(G[i][j],G[i][k]+G[k][j]);
				
	for (int i=0;i<k;i++)
	{
		int x,y;
		cin>>x>>y;
		if (G[x][y]>INF/2) cout<<"impossible\n";
		else cout<<G[x][y]<<"\n";
	}
	return 0;
}



