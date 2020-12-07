#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;

int main()
{
	/*	ios::sync_with_stdio(false);
	    cin.tie(0);
	  */  cout.tie(0);
	ll a,b;
	double c;
	cin>>a>>b;
	if (b==0)
	{
		printf("%lld/%lld=",a,b);
		cout<<"Error\n";
		return 0;
	}
	if (b<0)
	{
		c=a*1.0/b;
		printf("%lld/(%lld)=%.2lf\n",a,b,c);
		return 0;
	}
	c=a*1.0/b;
	printf("%lld/%lld=%.2lf\n",a,b,c);
	return 0;
}



