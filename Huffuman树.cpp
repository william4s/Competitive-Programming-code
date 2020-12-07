#include<stdio.h>
#include<stdlib.h>
#include<string.h> 
int cmp ( const void *a , const void *b )  
{  
return *(int *)a - *(int *)b;  
}  
int main(){
	int n,p[1000],a[1000],count=0,sum=0,i;
	memset(p,0,sizeof(p));
	scanf("%d",&n);
	for (i=0;i<n;i++) scanf("%d",&p[i]);
	
	for (i=0;i<n;i++) 
	{   qsort(p,n,sizeof(p[0]),cmp);
		p[i+1]=p[i]+p[i+1];
	    a[i+1]=p[i+1];
		 
	}
	for (i=1;i<n;i++)
	{
		sum=sum+a[i];
	
	} 
	printf("%d",sum); 
	
	return 0;
}
