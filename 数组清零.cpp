#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m,a[110][110],b[110][110],x,y;
	cin>>n>>m;
	for (int i=0;i<n;i++)
		for (int j=0;j<m;j++)
			cin>>a[i][j];
	memset(b,-1,sizeof(b));
	for (int i=0;i<n;i++)
		for (int j=0;j<m;j++)
		{
			if (a[i][j]==0)
			{
				x=i; y=j;
				for (int q=0;q<n;q++)
				b[q][y]=0;
				for (int w=0;w<m;w++)
				b[x][w]=0;
			}
			else if (b[i][j]!=0)
				b[i][j]=a[i][j];
			
			
		}
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<m;j++)
			cout<<b[i][j]<<' ';
		cout<<"\n";
		
	}
	
	return 0;
}
