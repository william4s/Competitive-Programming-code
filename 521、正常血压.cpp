#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,a,b,ans=0,max;
	max=-1;
	cin>>n;
	for (int i=0;i<n;i++)
	{
		cin>>a>>b;
		if (90<=a&&a<=140&&60<=b&&b<=90)
			{
				ans++;
				if (ans>max)
					max=ans;
			}
		else
			ans=0;
	}
	cout<<max;
	
	return 0;
}
