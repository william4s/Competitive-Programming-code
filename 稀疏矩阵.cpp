#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[200][200];
	int n,m,i,j;
	scanf("%d%d",&n,&m);
	for (i=0;i<n;i++)
	  for (j=0;j<m;j++)
	  scanf("%d",&a[i][j]);
	for (i=0;i<n;i++)
	  {
	  	for (j=0;j<m;j++)
	  	{
	  		if (a[i][j])
	  		  printf("%d %d %d\n",i+1,j+1,a[i][j]);
		}
	  }
	
	return 0;
}
