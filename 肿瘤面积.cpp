#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,i,j,k;
	int t,x1,x2,y1,y2;
	int pd=0;
	cin>>n;
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
			{
				cin>>t;
				if (t==0)
					{
						if (pd==0)
						{
							x1=i; y1=j;
							pd=1;
						}
						x2=i; y2=j;
					}
			}
			
		
	}
	int ans=0;
	cout<<x1<<' '<<y1<<' '<<x2<<' '<<y2<<endl;
	for (int i=x1+1;i<x2;i++)
		for (int j=y1+1;j<y2;j++)
			ans++;
			
	cout<<ans;

	return 0;
}

