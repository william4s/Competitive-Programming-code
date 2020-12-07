#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
string s[1010];

int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	ll n;
	cin>>n;
	for (ll i=1;i<=n;i++)
		cin>>s[i];
	sort(s+1,s+n+1);
	for (ll i=1;i<=n;i++)
		cout<<s[i]<<'\n';
	return 0;
}



