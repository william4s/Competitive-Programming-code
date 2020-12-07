#include<bits/stdc++.h>
using namespace std;
long a[101000];
long bfind(long l,long r,long x)
{
	long mid,ans=0;
	while(l<=r)
	{
		ans++;
		mid=(l+r)/2;
		if (x==a[mid]) 
			return ans;
		if (x<a[mid])
			r=mid-1;
		if (x>a[mid])
			l=mid+1;
	}
	cout<<ans<<endl;
	return -1;
}
int main(){
	long n,x,i,j,t=-1;
	cin>>n>>x;
	for (i=1;i<=n;i++)
		cin>>a[i];
	sort(a+1,a+1+n);
	t=bfind(1,n,x);
	if (t==-1)	cout<<-1;
	else{
		cout<<t<<endl<<1;
	}
	return 0;
}

