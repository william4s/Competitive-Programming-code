#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	double ans=0;
	cin>>n>>m;
	if (n==0&&m==0)
	{
		printf("%.1lf",0);
		return 0;
	}
	if (n<=2)
	{
		ans=6+m/3;
	}
	else if (n>2&&n<=10)
	{
		ans=6+(n-2)*1.8+m/3;
	}
	else
	{
		ans=6+(10-2)*1.8+(n-10)*1.8*1.5+m/3;
	}
	printf("%.1lf",ans);
	return 0;
}

