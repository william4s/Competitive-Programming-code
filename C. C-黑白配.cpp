#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
ll gcd(ll a,ll b)
{
	ll c;
	while(a%b)
	{
		c=a%b;
		a=b;
		b=c;
	}
	return b;
}
struct st
{
	ll k,c;
} a[100010];
ll k[4];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll n;
	cin>>n;
	for (ll i=0; i<n; i++)
	{
		cin>>a[i].k>>a[i].c;
		k[a[i].c]+=a[i].k;
	}
	if (k[0]==0||k[1]==0)
	{
		cout<<k[0]+k[1];
		return 0;
	}
	ll _gcd=gcd(k[0],k[1]);
	k[0]/=_gcd;
	k[1]/=_gcd;
//	cout<<k[0]<<' '<<k[1]<<"\n"<<_gcd;
	ll q=0,w=0,ans=0; //q->0  w->1
	for (ll i=0; i<n; i++)
	{
		if (a[i].c==0)
		{
			if (w%k[1]==0&&w!=0)
			{
				ll t=w/k[1];
				if (q<=t*k[0]&&(q+a[i].k)>=t*k[0])
				{
					ans++;
					//cout<<"q:"<<q<<" w:"<<w<<endl;
					q=q+a[i].k-t*k[0];
					
					w=0;
				}
				else
					q+=a[i].k;
			}
			else
				q+=a[i].k;
		}
		else
		{
			if (q%k[0]==0&&q!=0)
			{
				ll t=q/k[0];
				if (w<=t*k[1]&&(w+a[i].k)>=t*k[1])
				{
					ans++;
				//	cout<<"q:"<<q<<" w:"<<w<<endl;
					w=w+a[i].k-t*k[1];	
					q=0;
					
				}
				else
					w+=a[i].k;
					
			}
			else
				w+=a[i].k;
		}
		
	}
	cout<<ans;
	return 0;
}



