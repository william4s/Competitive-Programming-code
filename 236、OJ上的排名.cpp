#include<bits/stdc++.h>
using namespace std;
struct stu
{
	string s;
	int zf,xh;
}a[1010];

bool cmp(stu x,stu y)
{
	if (x.zf==y.zf)	
		return x.xh<y.xh;
	return x.zf>y.zf; 
}
int main(){
	int n,k,i,j,x,y;
	
	cin>>n>>k;
	for (i=0;i<n;i++)
	{
		cin>>a[i].s>>x>>y;
		a[i].zf=x+y;
		a[i].xh=i; 
	}
	sort(a,a+n,cmp);
	for (i=0;i<k;i++)
	{
		cin>>x;
		cout<<a[x-1].s<<endl;
	}
	return 0;
}

