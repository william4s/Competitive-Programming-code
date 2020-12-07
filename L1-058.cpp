#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	string s;
	getline(cin,s);
	ll cnt=0;
	for (ll i=0; i<=s.size(); i++)
	{
		if (s[i]=='6') cnt++;
		else
		{
			if (cnt>9)
				cout<<"27";
			else if (cnt>3&&cnt<=9)
				cout<<"9";
			else while(cnt--) cout<<"6";
			cnt=0;
			if (i==s.size()) continue;
			cout<<s[i];
		}
	}
	cout<<endl;


	return 0;
}



