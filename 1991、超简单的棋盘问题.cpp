#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int r[100005],c[100005];

int main()
{
	ll x,y,n,m,i,j,k=0,t=0,ans;
	cin>>n>>m;
	ans=n*n;
	for (i=0; i<m; i++)
	{
		cin>>x>>y;
		if (!r[x])
		{
			r[x]=1;
			ans-=n-t;
			k++;
		}
		if (!c[y])
		{
			c[y]=1;
			ans-=n-k;
			t++;
		}
		cout<<ans<<endl;
	}
	return 0;
}

