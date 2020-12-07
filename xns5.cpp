#include<stdio.h>

int main(){
	int a[2000];
	int n,i,j,k,max=-1,ans=1;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	    scanf("%d",&a[i]);
	for (i=1;i<n;i++)
	{
		if (a[i]<a[i+1])
		{
			ans++;
		}
		else
		{   if (max<ans)
			    max=ans;
			ans=1;
		}
	}
	if (max<ans)
	    max=ans;
	printf("%d",max);
	return 0;
}
