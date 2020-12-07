#include<bits/stdc++.h>
using namespace std;
struct stu
{
	long a,b,c,d;
} s[500];
long ans=LONG_MIN,kkk=0;
void fx(long t,long xq,long gx)
{
	if (t==0&&xq==0)
	{
		if (ans<gx)
			ans=gx;
		return ;
	}

	for(long i=s[t].a; i<=s[t].b; i++)
	{
		fx(t-1,xq+s[t].c*i,gx+s[t].d*i);
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	long n,i,j;
	cin>>n;
	for(i=1; i<=n; i++)
	{
		cin>>s[i].a>>s[i].b>>s[i].c>>s[i].d;
		kkk+=s[i].c;
	}

	fx(n,0,0);
	cout<<ans;
	return 0;
}

