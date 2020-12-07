#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m,a[200],i;
	cin>>n>>m;
	for (i=0;i<n;i++)
		cin>>a[i];
	for (i=0;i<n;i++)
		if ((i-m)<0) cout<<a[n-m+i]<<' ';
		else	cout<<a[(i-m)%n]<<' ';
	
	return 0;
}
