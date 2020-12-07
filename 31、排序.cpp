#include<bits/stdc++.h>
using namespace std;
bool cmp(double a,double b)
{
	return a>b;
}
int main(){
	int n,i,j;
	double a[110];
	cin>>n;
	for (i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n,cmp);
	for (i=0;i<n;i++)
		cout<<a[i]<<' ';
	
	return 0;
}
