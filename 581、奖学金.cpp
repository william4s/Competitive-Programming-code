#include<bits/stdc++.h>
using namespace std;
struct stu
{
	int zf,yw,bh;
}cj[330];

bool cmp(stu x,stu y)
{
	if (x.zf==y.zf&&x.yw!=y.yw)
		return x.yw>y.yw;
	else
	if (x.zf==y.zf&&x.yw==y.yw)
		return x.bh<y.bh;
	return x.zf>y.zf;
}
int main(){
	int n,a,b,c;
	cin>>n; 
	for (int i=0;i<n;i++)
	{
		cin>>a>>b>>c;
		cj[i].zf=a+b+c;
		cj[i].yw=a;
		cj[i].bh=i+1;
	}
	sort(cj,cj+n,cmp);
	for (int i=0;i<5;i++)
		cout<<cj[i].bh<<' '<<cj[i].zf<<endl;
	return 0;
}

