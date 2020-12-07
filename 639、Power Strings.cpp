#include<iostream>
#include<string>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
const int N=1e6+5;
ll ne[N];
string s;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	while(cin>>s)
	{
		if (s==".")
			return 0;
		for (ll i=1,j=0; i<s.size(); i++)
		{
			while(j&&s[i]!=s[j]) j=ne[j-1];
			if (s[i]==s[j]) j++;
			ne[i]=j;
		}
		//for (ll i=1;i<=s.size();i++)
		//	cout<<ne[i]<<' ';
		ll t=ne[s.size()-1];
		ll l=s.size();
		if (l%(l-t)!=0)
			cout<<"1\n";
		else
			cout<<l/(l-t)<<"\n";

	}

	return 0;
}



