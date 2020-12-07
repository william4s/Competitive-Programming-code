#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,i,j,k,l,r,ans=0;
	int a[1050],b[1050],c[1050];
	scanf("%d",&n);
	for (i=0;i<n;i++) scanf("%d",&a[i]);
	scanf("%d",&m);
	for (i=0;i<m;i++)
	{
		scanf("%d%d%d",&l,&r,&k);
		for (j=l-1;j<r;j++) b[j]=a[j];
		sort(b+l-1,b+r);
		c[ans++]=b[r-k];
		//printf("*%d\n",b[r-k]);
	}
	for (i=0;i<ans;i++) printf("%d\n",c[i]);
	return 0;
} 
