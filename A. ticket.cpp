#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF=0x3f3f3f3f;
const int N=1e5+5;
ll a,b,c,n;
ll k[N];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>a>>b>>c>>n;
	for(ll i=1; i<=n; i++)
		cin>>k[i];
	for(ll i=1; i<=n; i++)
	{
		if(i%2==1)
		{
			if(a>=k[i])
			{
				a-=k[i];

			}
			else
			{

				k[i]-=a;
				a=0;
				if(b>=k[i])
				{
					b-=k[i];

				}
				else
				{
					k[i]-=b;
					b=0;
					c-=k[i];
				}

			}
		}
		else if (i%2==0)
		{
			if (c>=k[i])
			{
				c-=k[i];
			}
			else
			{
				c-=k[i];
				ll tmp;
				if (c<0)
					tmp=-c;
				else
					tmp=c;
				tmp/=3;
				if (c%3!=0)
					tmp++;
				if (b>=tmp)
				{
					c+=tmp*3;
					b-=tmp;
				}
				else
				{
					c+=3*b;
					b=0;
				}
			}
			
		}
	}
	if (c<0)
		cout<<-c;
	else
		cout<<0;
	return 0;
}
