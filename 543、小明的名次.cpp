#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,t,i;
	int a[55];
	cin>>n;
	for (i=0;i<n;i++)
		cin>>a[i];
	cin>>t;
	sort(a,a+n);
	for (i=n-1;i>=0;i--)
		if (a[i]==t)
			{
				cout<<n-i;
				break;
			}
	return 0;
}
