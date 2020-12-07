#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
string s;

int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	ll n,m;
	cin>>n>>m;
	cin>>s;
	for (ll i=0;i<n-1;i++)
	{
		ll u,v;
		cin>>u>>v;
	}
	for (ll i=0;i<m;i++)
	{
		ll a,b,c,d;
		cin>>a>>b>>c>>d;
		if (a>b)
			swap(a,b);
		if (c>d)
			swap(c,d);
		//cout<<"##"<<a<<' '<<b<<' '<<c<<' '<<d<<endl;
		if (d-c!=b-a)
			cout<<"No\n";
		else
		{
			bool pd=1;
			for (ll i=0;i<=b-a;i++)
			{
				//cout<<i+a<<' '<<i+c<<endl;
				//cout<<s[i+a]<<' '<<s[i+c]<<endl;
				if (s[i+a]!=s[i+c])
				{
					pd=0;
					cout<<"No\n";
					break;
				} 
			}
			if (pd)
				cout<<"Yes\n";
		}
				
	}
	
	
	return 0;
}



