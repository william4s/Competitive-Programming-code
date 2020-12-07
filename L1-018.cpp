#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;

int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	ll h,m;
	string s;
	cin>>s;
	h=(s[0]-'0')*10+(s[1]-'0');
	m=(s[3]-'0')*10+s[4]-'0';
	if ((h<12)||(h==12&&m==0))
	{
		cout<<"Only "<<s<<".  Too early to Dang.\n";
	}
	else
	{
		ll t=h-11;
		if (m==0)
			t-=1;
		for (ll i=1;i<=t;i++)
			cout<<"Dang";
		cout<<"\n";
	}
	
	return 0;
}



