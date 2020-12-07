#include<bits/stdc++.h> 
using namespace std;
int main(){
	int n,i,x,max,pos;
	max=INT_MIN;
	pos=0;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&x);
		if (x>max)
		{
			max=x;
			pos=i;
		}
	}
	printf("%d %d",max,pos);
	
	return 0;
}
