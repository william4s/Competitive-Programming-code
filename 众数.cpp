#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[1010]={0};
	int n,i,j,k,t,max,x;
	scanf("%d",&n);
	max=0;
	for (i=0;i<n;i++)
	{
		scanf("%d",&x);
		a[x]+=1;
		if (a[x]>max) max=a[x];
	}
	for (i=0;i<=1000;i++)
	if (a[i]==max) printf("%d %d\n",i,a[i]);
	return 0;
} 
