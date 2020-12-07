#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
string s[10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"}; 
int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	string t;
	cin>>t;
	for (int i=0;i < t.size();i++)
		if (t[i]=='-')
			cout<<"fu ";
		else if (i!=t.size()-1)
			cout<<s[t[i]-'0']<<' ';
		else
			cout<<s[t[i]-'0'];
			
	return 0;
}


