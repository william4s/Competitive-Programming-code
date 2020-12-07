#include<bits/stdc++.h>
using namespace std;
int main(){
	double x; 
	int  n,m,i,j;
	int a[200][200],b[200][200];
	scanf("%d%d",&n,&m);
	for (i=0;i<n;i++)
	  for (j=0;j<m;j++){
	  scanf("%d",&a[i][j]);
	  b[i][j]=a[i][j];
      }
	for (i=1;i<n-1;i++)
	  for (j=1;j<m-1;j++)
	  {
	  	x=(a[i][j]+a[i-1][j]+a[i+1][j]+a[i][j-1]+a[i][j+1])*1.0/5*1.0;
	  	b[i][j]=round(x);
	  }
	for (i=0;i<n;i++)
	{
		for (j=0;j<m;j++)
		printf("%d ",b[i][j]);
		printf("\n");
	}
	return 0;
}
