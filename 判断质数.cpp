#include<bits/stdc++.h>
using namespace std;
int fun(int x)
{
	int i;
	for (i=2;i*i<=x;i++)
	{
		if (x%i==0) 
		   return 0;  
	}
	return 1;
}
int main(){
	int x,i;
	scanf("%d",&x);
	if (x<2)
	{
		printf("FALSE");
	}
	else
	{
		if (fun(x))
		  printf("TRUE");
		else
		  printf("FALSE");
	}
	
	return 0;
}
