#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
string change(string s,ll pre,ll now)
{
	ll num=0,k=1;
	string ans="";
	for(ll i=s.size()-1;i>=0;i--)
	{
		if (s[i]>='0'&&s[i]<='9')
		{
			num+=(s[i]-'0')*k;
			
		}
		else
		{
			num+=(s[i]-'A'+10)*k;
		}
		k*=pre;
	}
	while(num)
	{
		ll t=num%now;
		if (t>9)
		{
			ans=ans+char(t+'A'-10);
		}
		else
			ans=ans+char(t+'0');
		num/=now;
	}
	return ans;
}

int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	ll n=0,jz=10,k;
	string ans,t;
	cin>>n;
	
	while(n--)
	{
		string s;
		cin>>s;
		if (s=="CLEAR")
			ans="";
		if (s=="NUM")
		{
			cin>>t;
		}
		if (s=="CHANGE")
		{
			cin>>k;
			change(t,jz,k);
			jz=k;
		}
		
	}
	return 0;
}


