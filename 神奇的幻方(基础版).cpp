#include<bits/stdc++.h>
using namespace std;
int a[440][440];
int main(){
	long n;
	cin>>n;
	long i=1,x,y;
	a[1][n]=i++;
	x=1; y=n;
	while (i<=(2*n-1)*(2*n-1)) //2¿ªÊ¼ 
	{
		if (x==1&&y==2*n-1||a[x-1][y+1]!=0)
			{
				a[x+1][y]=i;
				x=x+1;
			}
		else
			if (x==1)
			{
				a[2*n-1][y+1]=i;
				y=y+1; x=2*n-1;
			}
		else 
			if (y==2*n-1)
			{
				a[x-1][1]=i;
				x=x-1; y=1;
			} 
		else
			{
				a[x-1][y+1]=i;
				x=x-1; y=y+1;
			}
		i++;	
	}
	for (int j=1;j<=2*n-1;j++)
	{
		for (int k=1;k<=2*n-1;k++)
			cout<<a[j][k]<<' ';
		cout<<endl;
	}
	return 0;
} 
