#include<bits/stdc++.h>
using namespace std;

int main(){
	long n,x,y,i,j,k;
	cin>>n>>x>>y;
	for (i=1;i<=n;i++)
		cout<<'('<<x<<','<<i<<") ";
	cout<<endl;
	for (i=1;i<=n;i++)
		cout<<'('<<i<<","<<y<<") ";
	cout<<endl;
	
	for (i=1;i<=n&&(i+y-x)<=n;i++) // y=x+(b-a);
		{
			j=i+y-x;
			if (j>=1)
			cout<<"("<<i<<","<<j<<") ";
		}
	cout<<endl;
	
	for (i=n;i>=1&&(y+x-i)<=n;i--)  //y=-x+(b+a);  i==x
	{
		j=y+x-i;
		if (j>=1)
		cout<<"("<<i<<","<<j<<") ";
	} 
	
	return 0;
}
