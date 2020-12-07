#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,i,j,k;
	int a[110],l[110],r[110],s[110]={0};
	cin>>n;
	for (i=1;i<=n;i++)
		{
			cin>>a[i];
			l[i]=1;
			r[i]=1;
		}
	for (i=n-1;i>=1;i--)
		for (j=i+1;j<=n;j++)
		if (a[i]>a[j]&&l[i]<=(l[j]+1))
			l[i]=l[j]+1;
//	for (i=1;i<=n;i++)
//		cout<<a[i]<<' '<<l[i]<<endl;
	for (i=2;i<=n;i++)
		for (j=1;j<i;j++)
		if (a[j]<a[i]&&r[i]<=(r[j]+1))
			r[i]=r[j]+1;
	int max=-1;
	for (i=1;i<=n;i++)
	{
		s[i]=r[i]+l[i]-1;
	//	cout<<s[i]<<endl;
		if (s[i]>max)
			max=s[i];
	}
	cout<<n-max; 
	return 0;
} 
