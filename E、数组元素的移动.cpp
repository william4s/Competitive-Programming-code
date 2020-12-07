#include<bits/stdc++.h>
using namespace std;

int main(){
	int a[105];
	int n,x;
	cin>>n;
	for (int i=0;i<n;i++)
		cin>>a[i];
	cin>>x;
	int t;
	t=a[x-1];
	for (int i=x-1;i<n-1;i++)
		a[i]=a[i+1];
	
	a[n-1]=t;
	for (int i=0;i<n;i++)
		cout<<a[i]<<' ';
	
	
	return 0;
}
