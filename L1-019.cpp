#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll q,w,n,a1,a2,b1,b2;
	cin>>q>>w>>n;
	ll r=q,t=w;
	bool pd=1;
	for (ll i=1; i<=n; i++)
	{
		cin>>a1>>a2>>b1>>b2;
		if (pd)
		{

			ll sum=a1+b1;
			if (sum==a2&&sum==b2)
				continue;
			else if (sum==a2)
				r--;
			else if (sum==b2)
				t--;
			if (r<0)
			{
				cout<<"A\n";
				cout<<w-t<<"\n";
				pd=0;
			}
			if (t<0)
			{
				cout<<"B\n";
				cout<<q-r<<"\n";
				pd=0;
			}
		}
	}


	return 0;
}



