#include<stdio.h>

int main(){
	int n,a[201],i,k,j,temp;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	   scanf("%d",&a[i]);
	for (i=1;i<=n-1;i++)
	  for (j=i+1;j<=n;j++)
	  {
	  	if (a[i]>a[j]) {temp=a[i]; a[i]=a[j]; a[j]=temp; }
	  	
	  }
	for (i=1;i<=n;i++) printf("%d ",a[i]);
	return 0;
} 
