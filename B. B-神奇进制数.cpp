#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
const ll MOD=1e9+7;
ll n1;
string zh(ll x)
{
	string s="";
	while(x)
	{
		ll t=x%2;
		s=char(t+'0')+s;
		x/=2;
	}
	while(s.size()<6)
	{
		s="0"+s;
	}
	return s;
}
int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	string s,p;
	ll sum=0,ans=1;
	cin>>s;
	for (ll i=0;i<s.size();i++)
	{
		if (s[i]>='0'&&s[i]<='9')
			n1=(s[i]-'0');
		else if (s[i]>='A'&&s[i]<='Z')
			n1=(s[i]-'A'+10);
		else if (s[i]>='a'&&s[i]<='z')
			n1=(s[i]-'a'+36);
		else if (s[i]=='-')
			n1=62;
		else
			n1=63;
		p=zh(n1);
		//cout<<p<<endl;
		for (ll i=0;i<6;i++)
			if (p[i]=='0')
				sum++;
	}
	for (ll i=1;i<=sum;i++)
		ans=(ans*3)%MOD;
	cout<<(ans)%MOD;
	return 0;
}



