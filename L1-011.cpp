#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
string s1,s2;
bool a[1000];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	getline(cin,s1);
	getline(cin,s2);
	for (ll i=0; i<s2.size(); i++)
		a[s2[i]]=1;
	for (ll i=0; i<s1.size(); i++)
		if (!a[s1[i]])
			cout<<s1[i];
	return 0;
}



