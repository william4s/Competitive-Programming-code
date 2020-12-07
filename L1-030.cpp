#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
struct st
{
	bool p=0;
	string s;
	bool used=0;
	
}a[100];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll n;
	cin>>n;
	ll maxa=0,maxb=0;
	for (ll i=0; i<n; i++)
	{
		cin>>a[i].p>>a[i].s;
	}
	for (ll i=0;i<n;i++)
	{
		for (ll j=n-1;j>=0;j--)
		{
			if (a[i].p!=a[j].p&&a[j].used==0&&a[i].used==0)
			{
				a[i].used=a[j].used=1;
				cout<<a[i].s<<' '<<a[j].s<<endl; 
			}
		}
	}
	return 0;
}



