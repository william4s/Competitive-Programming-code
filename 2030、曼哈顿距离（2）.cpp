#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll n,m,s,e,x1,y1,x2,y2;
	cin>>n>>m>>s>>e;

	if (s%m==0)
	{
		x1=s/m;
		y1=m;
	}
	else
	{
		x1=s/m+1;
		y1=s%m;
	}
	if(e%m==0)
	{
		x2=e/m;
		y2=m;
	}
	else
	{
		x2=e/m+1;
		y2=e%m;
	}
	/*	x1=s/m;
		x1++;
		y1=s%(m+1)+1;
		x2=e/m;
		if (s%m!=0)
			x2++;
		y2=e%(m+1)+1; */
	cout<<abs(x1-x2)+abs(y1-y2);

	return 0;
}

