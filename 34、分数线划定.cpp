#include<bits/stdc++.h>
using namespace std;
struct xs
{
	long k;
	long s;
}a[5050];
bool cmp(xs x,xs y)
{
	if (x.s==y.s) return x.k<y.k;
	return x.s>y.s;
}
int main(){
	long n,m;
	cin>>n>>m;
	for (int i=1;i<=n;i++)
	{
		cin>>a[i].k>>a[i].s;
	}
	sort(a+1,a+n+1,cmp);
	long ans=0;
	ans=m+m/2;
	m=ans;
	cout<<a[ans].s<<' ';
	for (int i=m+1;a[i].s>=a[m].s;i++) ans++;
	cout<<ans<<"\n";
	for (int i=1;i<=ans;i++)
		cout<<a[i].k<<' '<<a[i].s<<"\n";
	
	return 0;
}
