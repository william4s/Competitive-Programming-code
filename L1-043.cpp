#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
struct stu
{
	ll time;
	bool pd=0;
} a[1010];
ll zh(string s)
{
	ll ans=0;
	ll h=0,m=0;
	for(ll i=0;i<2;i++)
	{
		h=h*10+(s[i]-'0'); 
	}
	for (ll i=3;i<=4;i++)
		m=m*10+(s[i]-'0');
	ans=h*60+m;
	return ans;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll T;
	cin>>T;
	while(T--)
	{
		for (ll i=0;i<=1000;i++)
			a[i].pd=0,a[i].time=0;
		string s,t;
		ll x,cnt=0,sum=0;
		while(cin>>x>>s>>t)
		{
			ll tim=zh(t);
			if (x==0)
			{
				if (cnt==0)
					cout<<"0 0\n";
				else
					cout<<cnt<<' '<<floor(sum*1.0/cnt+0.5)<<"\n";
		
			
				break;
			}
			if (s=="S")
			{
				a[x].time=tim;
				a[x].pd=1;
			}
			else if (s=="E"&&a[x].pd==1)
			{
				a[x].pd=0;
				sum+=tim-a[x].time;	
				cnt++;
				//cout<<"x: "<<x<<' '<<"time:"<<tim<<' '<<a[x].time<<' '<<sum<<endl; 
			}
			
		}

	}
	return 0;
}



