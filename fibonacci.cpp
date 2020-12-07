#include<stdio.h>

int main(){
	int a1=1,a2=1,sum=0,t=0;
	long i,n;
	scanf("%ld",&n);
	for (i=1;i<=n;i++)
	 {
	 	sum=a1%1000000007;
	 	t=a2;
	 	a2=(a1+a2)%1000000007;
	 	a1=t;
	 }
	printf("%d",sum);
	
	return 0;
} 
