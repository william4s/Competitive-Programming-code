#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,i,j;
	int a[101][101];
	scanf("%d %d",&n,&m);
	for (i=0;i<n;i++)
	  for (j=0;j<m;j++)
	  scanf("%d",&a[j][i]);
	for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
		printf("%d ",a[i][j]);
		printf("\n");
	}
	return 0;
}
