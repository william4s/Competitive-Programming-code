#include<stdio.h>
#include<math.h>
int main() {
	
	int i,j,k,n;
    int ans=1;
    scanf("%d",&n);
    for (i=2;i<=n-1;i++)
    {
    	ans+=i;
	}
	printf("%d",ans);
	
	
	return 0;
}
