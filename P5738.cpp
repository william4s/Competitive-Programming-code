#include<bits/stdc++.h>
using namespace std;

int main(){
	int i,j,n,m,a[100],sum;
	double max,t;
	max=-1.0;
	cin>>n>>m;
	for (i=0;i<n;i++)
	{
		for (j=0;j<m;j++)
		{
			cin>>a[j];
		}
		sort(a,a+m);
		sum=0;
		for (j=1;j<m-1;j++)
		{
			sum+=a[j];
		}
		t=(double)sum/(m-2);
		if (max<t) max=t;
	}
	printf("%.2lf",max);
	return 0;
} 
