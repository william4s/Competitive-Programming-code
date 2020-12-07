#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
int  pre[1000005];
bool t[1000005];               //t 用于标记独立块的根结点
 
int Find(int x)
{
	int r=x;
	while(r!=pre[r])
		r=pre[r];
	
	int i=x,j;
	while(pre[i]!=r)
	{
		j=pre[i];
		pre[i]=r;
		i=j;
	}
	return r;
}
 
void mix(int x,int y) //join in
{
	int fx=Find(x),fy=Find(y);
	if(fx!=fy)
	{
		pre[fy]=fx;
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
//	freopen("1.txt","r",stdin);
//	freopen("2.txt","w",stdout);
	ll maxn,m,n,k,x,y,ans=0;
	cin>>m>>n>>k;
	maxn=m*n;
	for(ll i=1;i<=maxn;i++)
		pre[i]=i;
	for(int i=0; i<k; i++)
	{
		cin>>x>>y;
		mix(x,y);
	}
	for(ll i=1;i<=maxn;i++)
	{
		t[Find(i)]=1;
	}
	for(ll i=1;i<=maxn;i++)
		ans+=t[i];
	cout<<ans;
	return 0;
}


