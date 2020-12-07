#include<bits/stdc++.h>
using namespace std;
const int maxn = 3000;
int f[maxn],g[maxn];
int main(){

	long i,j,s,k,c,n,t=maxn-1,s2,c2;
	cin>>n;

	g[0]=f[0]=1;
	for (i=2;i<=n;i++)
	{
		c=0;
		c2=0;
		for (j=0;j<maxn;j++)
		{
		  s = f[j] * i + c;
		  f[j] = s % 10;
		  c= s / 10;
		  s2=g[j]+f[j]+c2;
		  g[j]=s2%10;
		  c2=s2/10;
		}
		 	
	} 
	 for(j = maxn-1; j >= 0; j--) if(g[j]) break;
     for(i = j; i >= 0; i--) cout<<g[i];
 
return 0;	
}
