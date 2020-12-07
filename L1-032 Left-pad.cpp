#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;

int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    char x;
	string s;
	ll n;
	cin>>n>>x;
	cin.get(); 
	getline(cin,s);
	if (n>s.size())
	{
		for (ll i=0;i<n-s.size();i++)
			cout<<x;
		cout<<s;
	}
	else
	{
		for (ll i=s.size()-n;i<s.size();i++)
			cout<<s[i];
	}
	cout<<"\n";
	return 0;
}



