#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
const int N=1e6+5;
ll stk[N],hh,tt=-1;

int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	ll m;
	cin>>m;
	while(m--)
	{
		string s;
		ll x;
		cin>>s;
		if (s=="push")
		{
			cin>>x;
			stk[++tt]=x;
		}
		if (s=="query")
			cout<<stk[hh]<<"\n";
		if (s=="empty")
		{
			if (tt<hh)
				cout<<"YES\n";
			else
				cout<<"NO\n";
		}
		if (s=="pop")
			++hh;
		
	}
	return 0;
}



