#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
bool vis[11];
ll a[11];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	string s;
	cin>>s;
	for (ll i=s.size()-1; i>=0; i--)
	{
		vis[s[i]-'0']=1;
	}
	ll cnt=0;
	for (ll i=10; i>=0; i--)
		if (vis[i])
			a[cnt++]=i;
	cout<<"int[] arr = new int[]{";
	for (ll i=0; i<cnt; i++)
	{
		if (i==0)
			cout<<a[i];
		else
			cout<<","<<a[i];
		a[i]=-a[i];
	}
	cout<<"};\n";
	cout<<"int[] index = new int[]{";
	for (ll i=0; i<s.size(); i++)
	{
		ll pos=upper_bound(a,a+cnt,-(s[i]-'0'))-a-1;
		if (i==0)
			cout<<pos;
		else
			cout<<","<<pos;
	}
	cout<<"};\n";
	return 0;
}



