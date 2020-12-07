#include<bits/stdc++.h>
using namespace std;
int a[110][110];
int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
	long n;
	cin>>n;
	int t=1;
	int k=ceil(n*1.0/2.0);
	while(k>=1)
	{
		for (int i=k;i<=n-k+1;i++)
			a[k][i]=a[n-k+1][i]=a[i][k]=a[i][n-k+1]=t;
		k--;
		t++;
	}
	
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=n;j++)
			cout<<a[i][j]<<' ';
		cout<<endl;
		
	}


	return 0;
}

