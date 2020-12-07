#include<bits/stdc++.h>
using namespace std;
struct stu
{
	string id;
	int old,sx;
}a[110];

bool cmp(stu x,stu y)
{
	if (x.old>=60&&y.old<60)
		return x.old>y.old;
	if (x.old<60&&y.old>=60)
		return x.old>y.old;
	if (x.old<60&&y.old<60)
		return x.sx<y.sx;
	if (x.old==y.old)
		return x.sx<y.sx;
	return x.old>y.old;
}
int main(){
	int n,i,j;
	cin>>n;
	for (i=0;i<n;i++)
	{
		cin>>a[i].id>>a[i].old;
		a[i].sx=i;
	}
	sort(a,a+n,cmp);
	for (i=0;i<n;i++)
		cout<<a[i].id<<endl;
	return 0;
}

