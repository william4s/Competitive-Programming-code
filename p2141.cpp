#include<stdio.h>

int main(){
	int n,i,j,k,a[110],b[110],t=0;
	scanf("%d",&n);
	for (i=0;i<n;i++) { scanf("%d",&a[i]); b[i]=a[i]; }
	
	for (i=0;i<n;i++)
	{
	   for (j=i+1;j<n;j++)
	   {
	       for (k=0;k<n;k++) 
	       {
	         if (b[k]==a[i]+a[j]) {t++; b[k]=0;} 
	       }
        }
    } 
	 printf("%d",t);    
  	return 0;
} 
