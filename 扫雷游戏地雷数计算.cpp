#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,i,j,k;
	int a[200][200];
	char s[200],x;
	scanf("%d%d",&n,&m);
	for (i=0;i<200;i++)
	  for (j=0;j<200;j++)
	  a[i][j]=0;
	  
	for (i=0;i<n;i++)
	{

	    scanf("%s",s);
	    for (j=0;j<m;j++)
    	{
		    if (s[j]=='*') a[i+1][j+1]=1;
		}
    }
/*   for (i=1;i<=n;i++)
     {
     	for (j=1;j<=m;j++)
     	printf("%d",a[i][j]);
     	printf("\n");
	 }  */
	for (i=1;i<=n;i++)
	{
	  for (j=1;j<=m;j++)
	  {
	  	if (a[i][j]!=1) {
	  		k=a[i-1][j-1]+a[i-1][j]+a[i-1][j+1]+a[i][j+1]+a[i][j-1]+a[i+1][j+1]+a[i+1][j]+a[i+1][j-1];
	  		printf("%d",k);
		  }
		else printf("*");
	  }
	  printf("\n");
    }   
	return 0;
} 
