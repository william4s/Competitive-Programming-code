#include<stdio.h>
int main(){
	int n,i,j,k;
	
	scanf("%d",&n);
	for (i=1;i<=9;i++)
	
		for (j=0;j<=9;j++)
		
			for (k=0;k<=9;k++)
			
				if ((i+j)*2+k==n) printf("%d%d%d%d%d\n",i,j,k,j,i);
		for (i=1;i<10;i++)
	 for (j=0;j<10;j++)
	   for (k=0;k<10;k++) if ((i+j+k)*2==n) printf("%d%d%d%d%d%d\n",i,j,k,k,j,i);
	
	
	
	return 0;
}
