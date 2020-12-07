#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
const int N=1e5+10;
int n,m;
int w[N],h[N],val[N],ne[N],idx;
ll d[N];
bool st[N];
void insert(int x,int y,int z)
{
	w[idx]=z,val[idx]=y,ne[idx]=h[x],h[x]=idx++;
}
queue<int> q;
int spfa()
{
	memset(d,0x3f,sizeof d);
	d[1]=0;
	q.push(1);
	st[1]=1;
	while(q.size())
	{
		int t=q.front();
		q.pop();
		st[t]=0;
		for (int i=h[t];i!=-1;i=ne[i])
		{
			int j=val[i];
			if (d[j]>d[t]+w[i])
			{
				d[j]=d[t]+w[i];
				if (!st[j])
				{
					q.push(j);
					st[j]=1;
				}
			}
			
		}
	}
	return d[n];
}
int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    memset(h,-1,sizeof h);
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		int x,y,z;
		cin>>x>>y>>z;
		insert(x,y,z);
	}
	int pd=spfa();
	if (pd==INF)
		cout<<"impossible\n";
	else
		cout<<pd<<"\n";

	return 0;
}



