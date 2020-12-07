#include<bits/stdc++.h>
using namespace std;
int a[1010][1010];
int main(){
	long n;
	cin>>n;
	int k=1;
	while(k<=ceil(n*1.0/2.0))
	{
		for (int i=k;i<=n-k+1;i++)
			a[k][i]=a[n-k+1][i]=a[i][k]=a[i][n-k+1]=k;
		k++;
	}
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=n;j++)
			cout<<a[i][j]<<' ';
		cout<<endl;
		
	}
	return 0;
}
