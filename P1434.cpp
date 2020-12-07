#include<bits/stdc++.h>
using namespace std;
int a[110][110],dp[110][110],r,c;
long ans=LONG_MIN;
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
long dfs(int x,int y)
{
	if (dp[x][y])
		return dp[x][y];
	dp[x][y]=1;
	for(int i=0;i<4;i++)
	{
		int xx=x+dx[i];
		int yy=y+dy[i];
		if (xx>=1&&xx<=r&&yy>=1&&yy<=c&&a[xx][yy]<a[x][y])
		{
			dfs(xx,yy);
			dp[x][y]=max(dp[x][y],dp[xx][yy]+1);
		}
		
	}
	return dp[x][y];
}
int main(){
	int i,j;
	cin>>r>>c;
	for(i=1;i<=r;i++)
		for(j=1;j<=c;j++)
		cin>>a[i][j];
	for(i=1;i<=r;i++)
		for(j=1;j<=c;j++)
		{
			ans=max(ans,dfs(i,j));
			
		}
	cout<<ans;
	return 0;
}

