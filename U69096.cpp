#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	int a[110],b[110];
	cin>>n;
	for (int i=0;i<n;i++)
		cin>>b[i];
	for (int i=n-1;i>0;i--)
		a[i]=b[i]-b[i-1];
	a[0]=b[0];
	for (int i=0;i<n;i++)
	cout<<a[i]<<' ';
	
	
	return 0;
} 
