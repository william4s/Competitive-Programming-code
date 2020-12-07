#include<stdio.h>

int main(){
	int a[1000];
	int i,n,s,k=0;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	  scanf("%d",&a[i]);
	scanf("%d",&s);
	for (i=0;i<n;i++)
	{
		if (a[i]==s) 
		{
	    printf("%d",i+1);
		k=1;
		break;
	    }
	}
	if (k==0) printf("-1");
	return 0;
}
