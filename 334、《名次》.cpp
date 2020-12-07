#include<bits/stdc++.h>
using namespace std;
struct stu
{
	int zf,xh;
}a[110];
bool cmp(stu x,stu y)
{
	if (x.zf==y.zf)
		return x.xh<y.xh;
	return x.zf>y.zf;
}

int main(){
	int n,i,j,k,x,q,w,e;
	cin>>n;
	for (i=0;i<n;i++)
	{
		cin>>q>>w>>e;
		a[i].zf=q+w+e;
		a[i].xh=i+1;
	}
	sort(a,a+n,cmp);
	cin>>k;
	cout<<a[k-1].xh<<' '<<a[k-1].zf;
	return 0;
}

