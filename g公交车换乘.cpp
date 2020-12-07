#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
const int N=1e5+5;
struct st
{
	ll pri,t;
} a[N];
bool vis[N];
ll ans;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll n; int pd;
	cin>>n;
	for (ll i=1,front=1,k=1; i<=n; i++)
	{
		ll price,time;
		cin>>pd>>price>>time;
		if (pd==0)
		{
			ans+=price;
			a[k++]={price,time+45};
		}
		else
		{
			while(front<k&&time>a[front].t) front++;
			bool pd=0;
			for (ll j=front;j<k;j++)
			{
				if (!vis[j]&&price<=a[j].pri)
				{
					vis[j]=1;
					pd=1;
					break;
				}
			}
			if (!pd) ans+=price;
		}
	}
	cout<<ans;
	return 0;
}



