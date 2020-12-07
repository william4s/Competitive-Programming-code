#include<bits/stdc++.h>
using namespace std;
int fun(int x)
{
	int i;
	for (i=2;i*i<=x;i++)
	  if (x%i==0) return 0;
return 1;
}
int rev(int x)
{
	int n=0,t=0;
	while(x)
	{
		t=x%10;
		x/=10;
		n=n*10+t;
	}
	return n;
}
int main(){
	int i,j,k,t,x,n,m,ans=0;
	scanf("%d%d",&n,&m);
	for (i=n;i<=m;i++)
	{
		if (fun(i))
		{
			if (fun(rev(i)))ans++;
		}
	}
	printf("%d",ans);
	return 0;
} 
