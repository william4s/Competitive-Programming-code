#include<bits/stdc++.h>
using namespace std;
double a[1050],ans;

int main(){
	int n;
	cin>>n;
	if (n==0)
	{
		cout<<"0.00\n";
		return 0;
	}
	//for (int i=1;i<=n;i++) cin>>a[i];
	for (int i=1;i<=n;i++)
	{
		double x;
		cin>>x;
		ans+=1/x;
	}
	ans=n*1.0/ans;
	printf("%.2lf\n",ans);
	
	return 0;
}
