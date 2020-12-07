#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
const int M=100000+10;
ll h=-1,val[M],ne[M],idx;


int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	ll m;
	cin>>m;
	memset(ne,-1,sizeof ne);
	while(m--)
	{
		char ch;
		ll k,x;
		cin>>ch;
		if (ch=='H')
		{
			cin>>x;
			ne[idx]=h;
			h=idx;
			val[idx++]=x;
		}
		else if (ch=='D')
		{
			cin>>k;
			if (k==0)
			{
				h=ne[h];
			}
			else
				ne[k-1]=ne[ne[k-1]];
		}
		else
		{
			cin>>k>>x;
			val[idx]=x;
			ne[idx]=ne[k-1];
			ne[k-1]=idx++;
		}
	}
	for (ll i=h;i!=-1;i=ne[i])
		cout<<val[i]<<' ';
}



