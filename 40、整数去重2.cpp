#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,j,k;
	int a[2020],b[2020];
	cin>>n;
	for (int i=0;i<n;i++)
		scanf("%d",&a[i]);
	sort(a,a+n);
	for (int i=0;i<n;i++)
	{
		if (a[i]!=k)	
		b[j++]=a[i];
		if (a[i]==a[i+1])
			k=a[i];
	}
	cout<<j<<endl;
	for (int i=0;i<j;i++)
		cout<<b[i]<<endl;
	return 0;
}
