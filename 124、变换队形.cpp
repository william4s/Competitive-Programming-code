#include<bits/stdc++.h>
using namespace std;
long a[1010];
bool cmp(long x,long y)
{
	return x>y;
}
int main(){
	long n,m;
	
	cin>>n>>m;
	for (int i=1;i<=n;i++)
		cin>>a[i];
	sort(a+1,a+n+1,cmp);
	for (int i=1;i<=n;i++)
	{
		cout<<a[i]<<" ";
		if (i%m==0)
			cout<<"\n";
	}
	
	return 0;
}
