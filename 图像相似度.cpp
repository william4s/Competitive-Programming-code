#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,i,j,s=0,x;
	double ans;
	int a[200][200];
	scanf("%d%d",&m,&n);
	for (i=0;i<m;i++)
	  for (j=0;j<n;j++)
	  scanf("%d",&a[i][j]);
	for (i=0;i<m;i++)
	  for (j=0;j<n;j++)
	  {
	  	scanf("%d",&x);
	  	if (x==a[i][j]) s++;
	  }
	ans=s*1.0/(n*m);
	printf("%.2lf",ans*100);
	return 0;
}
