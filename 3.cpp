#include<bits/stdc++.h>
using namespace std;

int main()
{
	double a,b,ans=0;
	int t;
	cin>>a>>t>>b;
	if (t==0)
	{
		ans=a*2.455;
		printf("%.2lf ",ans);
		if (b>ans)
			cout<<"^_^";
		else
			cout<<"T_T";
		cout<<endl;
	}
	else
	{
		ans=a*1.26;
		printf("%.2lf ",ans);
		if (b>ans)
			cout<<"^_^";
		else
			cout<<"T_T";
		cout<<endl;
	}

	return 0;
}
