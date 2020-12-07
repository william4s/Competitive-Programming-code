#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

string check(string s)
{
	for (ll i=0;i<s.size();i++)
		if (s[i]>'9'|s[i]<'0')
			return "?";
	return s;
	
}
int main(){
	//ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0); 
	string s1,s2,s3,s4;
	cin>>s1;
	getchar();

	getline(cin,s2);
	s3=check(s1);
	s4=check(s2);
	if (s1=="0"||(s1.size()>=4&&s1!="1000"))
	{
		s3="?";
	}
	if (s2=="0"||(s2.size()>=4&&s2!="1000"))
	{
		s4="?";
	}
	ll ans=0;
	if (s3!="?"&&s4!="?")
	{
		ll q=0,w=0;
		for (ll i=0;i<s1.size();i++)
		{
			q=q*10+(s1[i]-'0');
		}
		for (ll i=0;i<s2.size();i++)
			w=w*10+(s2[i]-'0');
		ans=q+w;
	}
	else
	{
		cout<<s3<<" + "<<s4<<" = "<<"?\n";
		return 0;
	}
	cout<<s3<<" + "<<s4<<" = "<<ans<<"\n";
	return 0;
}
