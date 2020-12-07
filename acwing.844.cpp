#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
typedef pair<int,int> PII;
ll n,m;
ll a[110][110],t[110][110];
queue <PII> q;
ll bfs()
{
	memset(t,-1,sizeof t);
	t[1][1]=0;
	q.push({1,1});
	int dx[4]={-1,1,0,0},dy[4]={0,0,1,-1};
	
	while(q.size())
	{
	
		PII fr=q.front();
	
		q.pop();
		for (ll i=0;i<4;i++)
		{
			ll x=fr.first+dx[i],y=fr.second+dy[i];

			if (x>=1&&x<=n&&y>=1&&y<=m&&t[x][y]==-1&&a[x][y]==0)
			{
	
				q.push({x,y});
				t[x][y]=t[fr.first][fr.second]+1;
			}
			
		}
		
	}
	return t[n][m]; 
}

int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

	cin>>n>>m;
	for (ll i=1;i<=n;i++)
		for(ll j=1;j<=m;j++)
			cin>>a[i][j];
	cout<<bfs();	

	return 0;
}



