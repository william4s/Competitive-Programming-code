#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll a,b,x,y,ans=0;
	cin>>a>>b>>x>>y;
	if (a<b)
	{

		if (2*x<y)
		{
			ans=abs(b-a)*2*x+x;
		//	cout<<1<<endl;
		}
		else
		{
			ans=x+abs(b-a)*y;
		//	cout<<2<<endl;
		}
	}
	else if (a>b)
	{
		if (2*x<y)
		{
			//cout<<3<<endl;
			ans=abs(a-b-1)*2*x+x;
		}
		else
		{
		//	cout<<4<<endl;
			ans=x+abs(a-b-1)*y;
		}
		
	}
	else
		ans=x;
	cout<<ans;
	return 0;
}



