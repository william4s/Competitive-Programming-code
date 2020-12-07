#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;

int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	string s,ans;
	cin>>s;
	for (ll i=6;i<s.size();i++)
		cout<<s[i];
	cout<<"-";
	for (ll i=0;i<5;i++)
		cout<<s[i];
	cout<<"\n";
	return 0;
}



