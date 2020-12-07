#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
const int N=1e5+5,M=2e5+5;
int n,ans=N;
int h[N],val[M],ne[M],idx;
bool st[N];
void insert(int a,int b)
{
	val[idx]=b,ne[idx]=h[a],h[a]=idx++;
}
int dfs(int u)
{
	st[u]=1;
	int sum=1,size=0;
	for (int i=h[u];i!=-1;i=ne[i])
	{
		int j=val[i];
		if (st[j]) continue;
		
		int s=dfs(j);
		size=max(s,size);
		sum+=s;
		
	}
	size=max(size,n-sum);
	ans=min(ans,size);
	return sum;
}
int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    memset(h,-1,sizeof h);
	cin>>n;
	for (ll i=0;i<n-1;i++)
	{
		int a,b;
		cin>>a>>b;
		insert(b,a),insert(a,b);
		
	}
	dfs(1);
	cout<<ans<<endl;
	return 0;
}



