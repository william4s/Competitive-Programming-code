#include<bits/c++std.h>
using namespace std;
int n,pos[15];

void DFS(int r)
{
	if (r==n) {tot++; return;	}
	for (i=0;i<n;i++)
	{
		if (check(i))
	 } 
	
}
int main(){
	
	for (n=0;n<=10;n++)
	{
		memset(pos,0,sizeof(pos));
		tot=0; 
		DFS(0);
		ans[n]=tot;
	}
	
	while(scanf("%d",&n))
	{
		if (n==0) return 0;
	    printf("%d",ans[n])
	}
	
	return 0;
}
