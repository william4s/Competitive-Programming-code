#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
const int N=4e5+10;
ll ne[N];
string s;
int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	while(cin>>s)
	{
		for (ll i=1;i<=s.size();i++)
			ne[i]=0;
		for (ll i=1,j=0;i<s.size();i++)
		{
			while(j&&s[i]!=s[j]) j=ne[j-1];
			if (s[i]==s[j]) j++;
			ne[i]=j;
		}
		for (ll i=0;i<=s.size();i++)
			if (ne[i])
				cout<<ne[i]<<' ';
		cout<<"\n";
		
		
	}
	return 0;
}



