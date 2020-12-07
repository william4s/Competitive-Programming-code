#include<bits/stdc++.h>
using namespace std;

int main(){
	long n;
	int a[110];
	cin>>n;
	for (int i=0;i<n;i++)
		cin>>a[i];
	cin>>a[n];
	sort(a,a+n+1);
	for (int i=0;i<=n;i++)
		cout<<a[i]<<' '; 
	
	
	
	return 0;
} 
