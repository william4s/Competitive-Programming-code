#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m,i,j;
	cin>>n>>m;
	char t,map[110][110];
	int a[110][110]={0};
	for (i=1;i<=n;i++)
		for (j=1;j<=m;j++)
		{
			cin>>t;
			if (t=='*')
			{
				a[i-1][j]+=1;
				a[i-1][j-1]+=1;
				a[i-1][j+1]+=1;
				a[i][j-1]+=1;
				a[i][j+1]+=1;
				a[i+1][j-1]+=1;
				a[i+1][j]+=1;
				a[i+1][j+1]+=1;
				map[i][j]=t;
			}
		}
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=m;j++)
			{
				if (map[i][j]=='*') cout<<'*';
				else cout<<a[i][j];
			}
		cout<<endl;
	 } 
	
	return 0;
} 
