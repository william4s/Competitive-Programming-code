#include<bits/stdc++.h>
using namespace std;

int main(){
	long i,n,h;
	long a[110];
	cin>>n>>h;
	for (i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	int max,min;
	max=0;
	min=n+1;
	for (i=0;i<n;i++)
	{
		if (a[i]==h){
			if (min>i) min=i;
			if (max<i) max=i;
		}
	}
//	for (i=0;i<n;i++) cout<<a[i]<<" ";
	cout<<min+1<<' '<<max+1; 
	
	
	return 0;
}
