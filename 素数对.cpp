#include<bits/stdc++.h>
using namespace std;
int fun(int x)
{
	int i;
	for (i=2;i*i<=x;i++)
	if (x%i==0) return 0;
return 1;
}
int main(){
    int n,m,i,j,pd=0;
	scanf("%d%d",&n,&m);
	for (i=n;i<=m;i++)
	  if (i>2&&fun(i)&&fun(i+2)&&i+2<=m&&i+2<10000) 
	  {
	    printf("%d %d\n",i,i+2);
	    pd=1;
      }
    if (pd==0) printf("-1");
	return 0;
}
