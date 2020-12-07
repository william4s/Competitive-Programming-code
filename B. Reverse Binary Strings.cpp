#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;

int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	ll T;
	cin>>T;
	while(T--)
	{
		ll n,cnt1=0,cnt2=0;
		string s;
		cin>>n>>s;
		for (ll i=0;i<s.size()-1;i++)
		{
			if (s[i]==s[i+1]&&s[i]=='0')
				cnt1++;
			if (s[i]==s[i+1]&&s[i]=='1')
				cnt2++;
		}
		cout<<max(cnt1,cnt2)<<endl;
		
	 } 
	return 0;
}



