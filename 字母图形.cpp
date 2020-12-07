#include<stdio.h>

int main(){
	int n,m,i,j,t=0,k,temp;
	char a[26];
	for (i=0;i<26;i++) a[i]='A'+i;
	//	for (i=0;i<26;i++) printf("%c ",a[i]);
	scanf("%d%d",&n,&m);
	if (n<m) temp=n; else temp=m;
	for (i=0;i<n;i++)
	{   if (i<m)
	     {
	     	for (j=i;j>=0;j--) printf("%c",a[j]);
	        for (j=1;j<m-i;j++)  printf("%c",a[j]);
	        t++;    
		 }
		else
		{
			for (j=i;j>i-m;j--) printf("%c",a[j]);
		} 
	
	printf("\n");
	
	}  
	return 0;
} 
