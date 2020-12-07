#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
int n,m,k;
struct edge
{
	int from,to,cost;
}e[10010];
int d[550],last[550];

void bellman_ford()
{
	memset(d,0x3f,sizeof d);
	d[1]=0;
	for (int i=0;i<k;i++)
	{
		memcpy(last,d,sizeof last);
		for (int j=0;j<m;j++)
		{
			auto t=e[j];
			d[t.to]=min(d[t.to],last[t.from]+t.cost);
		}
	}
	
}
int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	cin>>n>>m>>k;
	for (int i=0;i<m;i++)
	{
		int x,y,z;
		cin>>x>>y>>z;
		e[i]={x,y,z};
	}
	bellman_ford();
	if (d[n] > INF/ 2) cout<<"impossible";
    else cout<<d[n];
	return 0;
}



