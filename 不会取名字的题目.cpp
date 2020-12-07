#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
const int N=1e5+5;
ll a[N],b[N];
bool cmp(ll a,ll b)
{
	return a>b;
}
int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	ll T;
	cin>>T;
	while(T--)
	{
		ll ct1=0,ct2=0,n;
		cin>>n;
		for (ll i=0;i<n;i++)
		{
			ll x;
			cin>>x;
			if (x<0)
				b[ct1++]=x;
			else
				a[ct2++]=x;
		}
		sort(a,a+ct2,cmp);
		sort(b,b+ct1);
		ll fs1=b[0]*b[1],fs2=b[2]*b[3];
		ll zs1=a[0]*a[1],zs2=a[2]*a[3];
		cout<<fs1<<' '<<fs2<<' '<<zs1<<' '<<zs2<<endl;
		if (fs1>zs1)
		{
			if (fs2>=zs1)
			{
				cout<<fs1*fs2*a[0]<<endl;
			}
			else
			{
				cout<<fs1*zs1*a[2]<<endl;
			}
		}
		else if (zs1>fs1)
		{
			if (zs2>=fs1)
			{
				cout<<zs1*zs2*a[4]<<endl;
			}
			else
			{
				cout<<zs1*fs1*a[2]<<endl;
			}
		}
		else if (zs1==fs1)
		{
			cout<<zs1*fs1*a[2]<<endl;
		}
	}
	return 0;
}



