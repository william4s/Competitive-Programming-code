#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,i,j,k;
	cin>>n>>m;
	//scanf("%d %d",&n,&m);
	for (i=1;i<=n;i++)
	  for(j=1;j<=n;j++)
	  {
	  	if (8*i-5*j==m)
	  	{
	  		
	  		cout<<i<<j<<n-i-j;
	  		
	  		//printf("%d %d %d",i,j,n-i-j);
	  		return 0;
		}
	   } 
return 0;
} 
