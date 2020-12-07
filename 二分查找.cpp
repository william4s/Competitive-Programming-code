#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,i,j,k,u,t,m,x,y;
	int a[100010];
	scanf("%d%d",&n,&t);
	for (i=0;i<n;i++)
	     scanf("%d",&a[i]);
	sort(a,a+n);
	for (i=0;i<t;i++)
	{
		scanf("%d",&u);
		x=0;y=n-1;
		while(x<y)
    	{
		m=(x+y)/2;
		if (a[n-1]<=u)
		{
			printf("%d ",a[n-1]);
			break;
		}
		else if (a[m]>u&&a[m-1]<=u&&m>0)
		{
		  printf("%d ",a[m-1]);
	      break;
		}
		else if (a[m-1]>u) y=m;
		else if(a[m]<=u) x=m+1;
		if (m==0) {
		   printf("-1 ");
	       break;
		   }
    	}
	}
		
	
	
	return 0;
}
