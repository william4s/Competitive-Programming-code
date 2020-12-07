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
		string s;
		cin>>s;
		if (s.size()>10)
		{
			cout<<s[0]<<s.size()-2<<s[s.size()-1]<<"\n";
		}
		else
			cout<<s<<"\n";
	}
	return 0;
}



