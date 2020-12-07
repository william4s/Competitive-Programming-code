#include<bits/stdc++.h>//20·Ö 
using namespace std;
typedef long long ll;
ll h,w,n,ans;
long mx[100005]= {false},my[100005]= {false};
#define MOD 1000000007;
bool check(ll x,ll y)
{
	for(int i=0;i<n;i++)
	{
		if (mx[i]==x&&my[i]==y)
			return false;
	}
	return true;
}
void find(ll x,ll y)
{
	if (x==h&&y==w)
	{
		ans+=1;
		ans=ans%MOD;
		return ;
	}
	if (check(x,y)&&x<=h&&y<=w)
	{
		find(x+1,y);
		find(x,y+1);
	}
}
int main()
{
	cin>>h>>w>>n;
	for (int i=0; i<n; i++)
	{
		int r,c;
		cin>>r>>c;
		mx[i]=r;
		my[i]=c;
	}
	find(1,1);
	cout<<ans;
	return 0;
}

