#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
string s;

int main()
{
	ios::sync_with_stdio(false);
	ll n;
	cin>>n;
	cin.get();
	for (ll i=0; i<n; i++)
	{
		string s1,s2;
		int p1,p2,pos;
		getline(cin,s);
		for (ll i=0; i<s.size(); i++)
			if (s[i]==',')
			{
				p1=i;
				break;
			}
		for (ll cnt=0,i=s.size()-1; cnt!=3&&i>=p1; i--)
			if (s[i]==' '||s[i]==',') pos=i,cnt++;
		if (p1-3>=0) s1=s[p1-3]+s[p1-2]+s[p1-1];
		else
		{
			cout<<"Skipped\n";
			break;
		}
		if (s.size()-4>=0) s2=s[s.size()-4]+s[s.size()-3]+s[s.size()-2];
		if (s1!=s2)
			cout<<"Skipped\n";
		else
		{
			for (ll i=0;i<=pos;i++)
				cout<<s[i] ;
			cout<<"qiao ben zhong.\n";
		}
	}

	return 0;
}



