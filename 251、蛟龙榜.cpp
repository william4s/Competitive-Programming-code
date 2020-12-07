#include<bits/stdc++.h>
using namespace std;
struct stu
{
	string s;
	int zf,time;
}a[110];

bool cmp(stu x,stu y)
{
	if (x.zf==y.zf&&x.time!=y.time)
		return x.time<y.time;
	if (x.zf==y.zf&&x.time==y.time)
		return x.s<y.s;
	return x.zf>y.zf;
}
int main(){
	int n,i,j,k,x,fs,time;
	cin>>n;
	for (i=0;i<n;i++)
	{
		cin>>a[i].s;
		for (j=1;j<=4;j++)
		{
			cin>>time>>fs;
			a[i].zf+=fs;
			a[i].time+=time;
		}
	}
	sort(a,a+n,cmp);
	for (i=0;i<n;i++)
		cout<<a[i].s<<endl;
	return 0;
}

