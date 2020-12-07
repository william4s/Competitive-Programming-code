#include  <bits/stdc++.h> 
using namespace std;
int a[110][110],x[110],y[110];
int n;
bool scan()
{
	for (int i=1;i<=n;i++)
	{
		if (x[i]%2!=0||y[i]%2!=0)
		return 0;
		//cout<<i<<":"<<x[i]<<' '<<y[i]<<endl; 
	}
	
	return 1;

}
int main()
{
	
	int i,j,k;
	cin>>n;
	for (i=1;i<=n;i++)
		for (j=1;j<=n;j++)
		{
			cin>>a[i][j];
			if (a[i][j])
				{
					x[i]++;
					y[j]++;
				}
			
		}
	int pd=0;
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=n;j++)
		{
			if (x[i]%2==0&&y[j]%2==0)
				pd=1;
			else
			if (x[i]%2!=0&&y[j]%2!=0)
				{
				//	cout<<i<<' '<<j<<endl;
					if (a[i][j]!=0)
					{
					x[i]+=1;
					y[j]+=1;
				  	}
				  	else
				  	{
				  	x[i]-=1;
					y[j]-=1; 
					}
					if (scan())
					{
						cout<<i<<' '<<j;
						return 0;
					}
					else
					{
						cout<<"Corrupt";
						return 0;
					}
					
				}	
		}
	}
	if (pd) cout<<"OK";
	
	
	
	return 0;
}
