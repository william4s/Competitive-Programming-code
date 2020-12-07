#include<stdio.h>

int main(){
	int i,n,s,sum=0,max=-10001,min=10001;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&s);
		if (s>max) max=s;
		if (s<min) min=s;
		sum=sum+s;
	}
	printf("%d\n",max);
	printf("%d\n",min);
	printf("%d",sum);
	
	
	return 0;
}
