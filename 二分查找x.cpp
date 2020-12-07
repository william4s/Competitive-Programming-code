#include<bits/stdc++.h>
using namespace std;
int a[10010];
int bfind(int l,int r,int x)
{
	int mid;
	while(l<=r)
	{
		mid=(l+r)/2;
		if (a[mid]==x)	return mid;
		if (a[mid]>x)	r=mid-1;
		if (a[mid]<x)	l=mid+1;
	}
	return -1;
}

int main(){
	int i,n,x;
	cin>>n>>x;
	for (i=0;i<n;i++)
		scanf("%d",&a[i]);
	int ans;
	ans=bfind(0,n,x);
	if (ans==-1)
		cout<<"no";
	else
		cout<<ans+1; 
	 
	
	
	return 0;
} 
