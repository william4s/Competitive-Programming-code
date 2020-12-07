#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,t=0,x,ans=0,max=INT_MIN;
	cin>>n;
	for (int i=0;i<n;i++)
	{
		cin>>x;
		if (x!=0)
		{
			ans+=x;
			t++;
		}
		if (max<x)
		{
			max=x;
		}
	}
	printf("%.2lf %d",ans*1.0/t*1.0,max);
	return 0;
}

