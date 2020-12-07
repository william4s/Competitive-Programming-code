#include<bits/stdc++.h>
using namespace std;
long sum_max,sum_min;
int main(){
	int n,m;
	int a[110][110];
	cin>>n>>m;
	for (int i=0;i<n;i++)
	{
		int max=INT_MIN;
		for (int j=0;j<m;j++)
		{
			cin>>a[i][j];
			if (a[i][j]>max)
				max=a[i][j];
		}
		sum_max+=max;
	}
	for (int j=0;j<m;j++)
	{
		int min=INT_MAX;
		for (int i=0;i<n;i++)
		{
			if (a[i][j]<min)
				min=a[i][j];
		}
		sum_min+=min;
	}
	cout<<sum_max-sum_min;
	return 0;
}
