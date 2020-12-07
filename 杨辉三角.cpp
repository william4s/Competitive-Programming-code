#include<stdio.h>
#include<string.h>

int main(){
	int a[41][41];
	int i,j,n; //i «y÷·£¨j «x÷· 
	memset(a,0,sizeof(a));
	a[0][0]=1; 
	a[0][1]=1; a[1][1]=1;
	scanf("%d",&n);
	for (i=2;i<=34;i++) a[0][i]=1;
	for (i=2;i<n;i++)
	  for (j=1;j<=i;j++)
	  {
	  	
	  	a[j][i]=a[j][i-1]+a[j-1][i-1]; 
	  }
	  for (i=0;i<n;i++)
	   {
	   	for (j=0;j<=i;j++)
	   	printf("%d ",a[j][i]);
	    printf("\n");
	   }
	return 0;
}
