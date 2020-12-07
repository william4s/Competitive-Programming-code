#include<bits/stdc++.h>
using namespace std;
char a[110][110],b[110][110];
long r,c,ans=0;
void dfs(long i,long j,bool pd)
{
	if (a[i][j]!='#'&&pd==1)
	{
		return ;
	}
	if (a[i][j]=='#'&&pd==1)
	{
		a[i][j]='.';
		dfs(i-1,j,1);
		dfs(i+1,j,1);
		dfs(i,j-1,1);
		dfs(i,j+1,1);
	}
	if (a[i][j]=='#'&&pd==0) //ÉÏ¡¢ÏÂ¡¢×ó¡¢ÓÒ
	{
		ans++;
		a[i][j]='.';
		dfs(i-1,j,1);
		dfs(i+1,j,1);
		dfs(i,j-1,1);
		dfs(i,j+1,1);
	}
	return ;
}
int main()
{
	long i,j,k,v;
	cin>>r>>c;
	for(i=1; i<=r; i++)
		for (j=1; j<=c; j++)
		{
			cin>>a[i][j];
			b[i][j]=a[i][j];
		}
	for (i=1; i<=r; i++)
		for (j=1; j<=c; j++)
			dfs(i,j,0);
	cout<<ans;
	return 0;
}

