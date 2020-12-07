#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
const int M=1e5+5;
ll val[M],r[M],l[M],idx;

void insert(ll k,ll n)
{
	val[idx]=n;
	l[idx]=k;
	r[idx]=r[k];
	l[r[k]]=idx;
	r[k]=idx++;
}
void remove(ll k)
{
	l[r[k]]=l[k];
	r[l[k]]=r[k];
}
int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	ll m;
	cin>>m;
	idx=2;
	r[0]=1;
	l[1]=0;  //idx从2开始使用 
	while(m--)
	{
		string op;
		cin>>op;
		if (op=="L")
		{
			ll x;
			cin>>x;
			insert(0,x);
		}
		if (op=="R")
		{
			ll x;
			cin>>x;
			insert(l[1],x);
		}
		if (op=="D")
		{
			ll k;
			cin>>k;
			remove(k+1);
			
		}
		if (op=="IL")
		{
			ll k,x;
			cin>>k>>x;
			insert(l[k+1],x);
		}
		if (op=="IR")
		{
			ll k,x;
			cin>>k>>x;
			insert(k+1,x);
		}
		
	}
	for (ll i=r[0];i!=1;i=r[i])
		cout<<val[i]<<' ';
	return 0;
}



