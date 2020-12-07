#include<bits/stdc++.h>
using namespace std;

int main(){
	long n,a[200];
	int max;
	max=INT_MIN;
	cin>>n;
	for (int i=0;i<n;i++)
	{
		cin>>a[i];
		if (a[i]>max) max=a[i];
	}
	for (int i=0;i<n;i++)
		if (a[i]!=max)
			cout<<a[i]<<' ';


	return 0;
}
