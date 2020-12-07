#include<stdio.h>

int main(){
	int h,k,i,j,n,m;
	long  a[50][50],b[50][50],c[50][50]; //a读入，b中间，c答案 
	scanf("%d%d",&n,&m);
	for (i=0;i<n;i++)
		for (j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
			b[i][j]=a[i][j];
			c[i][j]=a[i][j];
		}
	if (m==0)
	{
		for (i=0;i<n;i++)
		{
		
		   for (j=0;j<n;j++)
		   {
		   	if (i==j) printf("1 ");
		   	else printf("0 ");
		   }
		printf("\n");
	    }
	    return 0;
	} 
	if (m==1)
	{
		for (i=0;i<n;i++)
		{
			for (j=0;j<n;j++)
		        printf("%d ",a[i][j]);
		    printf("\n");
		}
		return 0;
	}
		for (k=0;k<m-1;k++) 
	{
		for (i=0;i<n;i++)
			for (j=0;j<n;j++)
			{   
				b[i][j]=0;
				for (h=0;h<n;h++)
				{
					b[i][j]+=c[i][h]*a[h][j];
				}

			}
		for (i=0;i<n;i++)
		    for (j=0;j<n;j++)
		    {
		    	c[i][j]=b[i][j];
			}
	}
   for (i=0;i<n;i++)
   {
	   for (j=0;j<n;j++)
		   printf("%ld ",c[i][j]);
       printf("\n");
   }
return 0;
}
