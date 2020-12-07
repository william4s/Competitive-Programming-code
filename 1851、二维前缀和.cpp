#include<bits/stdc++.h>
using namespace std;
long q,t,b[1010][1010]={0};
int main(){
	int n,m;
	
	cin>>n>>m>>q;
	for (int i=1;i<=n;i++)
		for (int j=1;j<=m;j++)
		{
			cin>>t;
			b[i][j]=b[i-1][j]+b[i][j-1]-b[i-1][j-1]+t;
		}
		
	
	for (int i=0;i<q;i++)
	{
		int x1,y1,x2,y2;
		cin>>x1>>y1>>x2>>y2;
		int x,y;
		x=x2-x1;
		y=y2-y1;
		cout<<b[x2][y2]-b[x1-1][y2]-b[x2][y1-1]+b[x1-1][y1-1]<<endl;
	}  

	return 0;
}
