#include<cstdio>
#include<algorithm>
#include<iostream>
using namespace std;
bool vis[4000005];
int n,mx,ans;
int main( )
{
	int i,j,x,c;
	cin>>n;
	for(i=1; i<=n; i++)
	{
		cin>>x;
		if(vis[x]) ans=max(ans,x);
		else vis[x]=1;
		mx=max(mx,x);
	}
	for(j=mx; j>ans; j--)
	{
		x=0;
		c=0;
		while(1)
		{
			x+=j;
			if(x>mx) break;
			if(vis[x])
			{
				c++;
				if(c==2)
				{
					printf("%d",j);
					goto over;
				}
			}
		}
	}
	printf("%d",ans);
over:
	;
	return 0;
}
