#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string s[300030],t="";
long a[300030],cnt=0;
ll n;
void perm(ll k,string w) //k²ã
{
	if (k==n+1)
	{
		s[cnt++]=w;
		return ;
	}
	for(ll i=1; i<=n; i++)
	{
		if (i==k)	continue;
		stringstream ss;
		ss << a[i];
		w+=ss.str();
		perm(k+1,w);
	}
}

int main()
{
	ll m,i;
	cin>>n>>m;
	for(i=1; i<=n; i++)
	{
		cin>>a[i];
		stringstream ss;
		ss << a[i];
		t+=ss.str();
	}
	string s1="";
	perm(1,s1);
	for(i=0;i<cnt;i++)
		cout<<s[i]<<endl;;
	return 0;
}

