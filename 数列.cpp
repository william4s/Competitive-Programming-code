#include<stdio.h>

int main(){
	int a[100000],t=0,k,n,i,j;
	long long  sum=0,k1;//t储存a数组下标 
	scanf("%d%d",&k,&n);
	
	while(n>0)
	{   
		a[t]=n % 2;
		t++;
		n=n/2;
	}

    for (i=0;i<t;i++) 
    {
    	k1=1;
    	for (j=1;j<=t-i-1;j++) k1=k1*k;

    	sum=sum+a[t-1-i]*k1;
    	
	}
	printf("%lld",sum);  
	return 0;
} 
