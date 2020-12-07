#include<bits/stdc++.h>
using namespace std;
struct stu
{
	int xh;
	string name;
	int sc;
	
}a[1010]; 

bool cmp(stu x,stu y)
{
	if (x.sc==y.sc)
		return x.xh<y.xh;
	return x.sc>y.sc;
}
int main(){
//	ios::sync_with_stdio(false);
  //  cin.tie(0);
	long n;
	int maxn=INT_MIN,sum=0,tot=0;
	double aver=0;
	cin>>n; 
	for (int i=1;i<=n;i++)
	{
		cin>>a[i].name>>a[i].sc;
		a[i].xh=i;
		if (a[i].sc!=0)
			{
				tot++;
				sum+=a[i].sc;
			}
	}
	aver=sum*1.0/tot;
	sort(a+1,a+n+1,cmp);
	printf("%.2lf\n",aver);
//	for (int i=1;i<=tot;i++)
//		cout<<a[i].name<<' '<<a[i].sc<<'\n';
	cout<<a[1].name<<' '<<a[1].sc<<'\n';
	cout<<a[tot].name<<' '<<a[tot].sc<<'\n';

	return 0;
}

