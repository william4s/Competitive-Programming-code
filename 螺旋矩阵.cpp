#include<bits/stdc++.h>
using namespace std;
int n,i,j,ans;
int main()
{
	scanf("%d%d%d",&n,&i,&j);
	while(true)
	{
		if(i==1)
		{
			printf("%d\n",j+ans);
			break;
		}
		else if(j==n)
		{
			printf("%d\n",i+j+ans-1);
			break;
		}
		else if(i==n)
		{
			printf("%d\n",3*i-j+ans-1);
			break;
		}
		else if(j==1)
		{
			printf("%d\n",4*n-i+ans-2);
			break;
		}
		else
		{
			i--;
			j--;
			ans+=4*(n-1);
			n-=2;
		}
	}
	return 0;
}
