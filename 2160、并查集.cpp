#include<bits/stdc++.h>//HDU1231
using namespace std;
typedef long long ll;
const int T=1e5+5;
int  pre[T];
bool t[T];

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
	int N,M,a,b,i,j,ans;
	cin>>N>>M;

	for(i=1; i<=N; i++)
		pre[i]=i;

	for(i=1; i<=M; i++)
	{
		char ch;
		cin>>ch>>a>>b;
		if (ch=='M')
			mix(a,b);
		else
		{
			ll x=Find(a),y=Find(b);
			if (x==y)
				cout<<"Yes\n";
			else
				cout<<"No\n";
		}
	}



	return 0;
}//william4s
