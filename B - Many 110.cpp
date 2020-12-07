#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
const int N=2e5+10;
const ll M=1e10;
ll ne[N],n;
string p="";
bool kmp(string s)
{
	ll m=s.size();
	bool pd=0;
	for(ll i = 0, j = 0; i < m; i ++)
	{
		while(j && s[i] != p[j]) j = ne[j - 1];
		if(s[i] == p[j])
		{
			j ++;
			if(j == n)
			{
				pd=1;
			}
		}
	}
	return pd;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll k,m;
	string s="";
	cin>>n>>p;

	if (n<=2)
	{

		if (p=="1")
			cout<<ll(2*M);
		if (p=="0")
			cout<<ll(M);
		if (p=="11")
			cout<<ll(M);
		if (p=="10")
			cout<<ll(M);
		if (p=="01")
			cout<<ll(M-1);
		if (p=="00")
			cout<<0;
		return 0;
	}
	k=n/3;
	for(ll i = 1, j = 0; i < n; i ++)
	{
		while(j && p[i] != p[j]) j = ne[j - 1];
		if(p[i] == p[j]) j ++;
		ne[i] = j;
	}
	for (ll i=0; i<k; i++)
		s+="110";
	for (int i=0;i<10;i++)
	{

		if (kmp(s))
		{
			cout<<ll(M-k+1);
			return 0;
		}
		s+="110";
		k+=1;
	}
	cout<<0;



	return 0;
}



