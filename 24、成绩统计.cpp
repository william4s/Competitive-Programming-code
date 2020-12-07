#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	long a[110],sum=0;
	double aver=0;
	cin>>n;
	for (int i=0;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	aver=sum/(n*1.0);
	printf("%.2lf\n",aver);
	for (int i=0;i<n;i++)
	if (a[i]>aver)
		cout<<i+1<<' '<<a[i]<<endl;
	
	return 0;
}
