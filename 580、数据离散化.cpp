#include<bits/stdc++.h>
using namespace std;
struct str
{
	int num,bh,pos;
}a[110];
bool cmp1(str x,str y)
{
	return x.num<y.num;
}
bool cmp2(str x,str y)
{
	return x.bh<y.bh;
}

int main(){
	int n;
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		cin>>a[i].num;
		a[i].bh=i;
	}
	sort(a+1,a+n+1,cmp1);
	for (int i=1;i<=n;i++)
		a[i].pos=i;
	sort(a+1,a+1+n,cmp2);
	for (int i=1;i<=n;i++)
		cout<<a[i].pos<<' ';
	return 0;
}

