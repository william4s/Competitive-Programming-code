#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,u,i,j,k,x1,x2,y1,y2,ans=0;
	int a[1000][100]={0};
	scanf("%d",&n);
	for (u=0;u<n;i++)
	{
		scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
		for (i=x1;i<=x2;i++)
		  for (j=y1;j<=y2;j++)
		  {
		    if (a[i][j]!=0)
			{
				ans++;
				a[i][j]=1;
				}	
		  } 
	}
	printf("%d",ans);
	return 0;
} 
