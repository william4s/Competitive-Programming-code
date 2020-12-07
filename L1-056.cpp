#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
struct stu
{
	string na;
	ll sc;
} a[10010];
ll sum;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll n;
	cin>>n;
	for (ll i=0;i<n;i++)
	{
		cin>>a[i].na>>a[i].sc;
		sum+=a[i].sc;
		
	}
	double avr=sum/n*1.0*0.5;
	stu ans;
	ans.sc=INF;
	ll minn=INF;
	for (ll i=0;i<n;i++)
	{
		if (abs(avr-a[i].sc)<minn)
			minn=abs(avr-a[i].sc),ans=a[i];
	}
	cout<<ll(avr)<<' '<<ans.na<<endl;
	return 0;
}



