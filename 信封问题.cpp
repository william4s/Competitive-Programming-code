#include<bits/stdc++.h>
using namespace std;
long f[30];

int main(){
	long n;
	f[0]=f[1]=0;
	f[2]=1;
	cin>>n;
	for (int i=3;i<=n;i++)
	{
		f[i]=(i-1)*f[i-1]+(i-1)*f[i-2];
	}
	cout<<f[n];
	return 0;
}

