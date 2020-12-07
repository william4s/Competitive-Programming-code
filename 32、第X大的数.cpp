#include<bits/stdc++.h>
using namespace std;

int main(){
	int k,n,i,a[1010];
	cin>>n;
	for (i=0;i<n;i++)
		cin>>a[i];
	cin>>k;
	sort(a,a+n);
	cout<<a[n-k]; 
	return 0;
}
