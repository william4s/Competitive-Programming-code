#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
const int N=1e5+5;
int n,m;
int h[N],ne[N],val[N],idx;
queue<int> q;
void insert(int a,int b)
{
	val[idx]=b,ne[idx]=h[a],h[a]=idx++;
}
int bfs()
{
	int d[N];
	memset(d,-1,sizeof d);
	d[1]=0;
	q.push(1);
	while(q.size())
	{
		int t=q.front();
		q.pop();
		for (int i=h[t];i!=-1;i=ne[i])
		{
			int j=val[i];
			if (d[j]==-1)
			{
				d[j]=d[t]+1;
				q.push(j);
				
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
	for (int i=0;i<m;i++)
	{
		int a,b;
		cin>>a>>b;
		insert(a,b);
		
	}
	cout<<bfs()<<endl;
	return 0;
}



