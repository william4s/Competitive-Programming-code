#include<stdio.h>
#include<string.h>
int main(){
	int a[5],b[5],t,t1,s,i,j;
    for (i=0;i<32;i++)
    {   s=4;
    	t=i;
    	for (j=0;j<5;j++) b[j]=0;
    	do
    	{
		b[s]=t%2;
		t=t/2;
		s--;
			
		}
    	while(t!=0);
    	for (j=0;j<5;j++) printf("%d",b[j]);
    	printf("\n");
	}
	return 0;
}
