#include <bits/stdc++.h>
using namespace std;
int a[110][110];
int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    long n;
	cin>>n;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++) 
			cin>>a[i][j];
			
	for(int i=n;i>=1;i--)
	{
		int y=1,x=i;
		while(x<=n&&y<=n)
		{
			cout<<a[x][y]<<" ";
			x++;y++;
		}
	}
	
	for(int i=2;i<=n;i++)
	{
		int x=1,y=i;
		while(x<=n&&y<=n)
		{
			cout<<a[x][y]<<" ";
			x++;y++;
		}
	}
	return 0;
}
