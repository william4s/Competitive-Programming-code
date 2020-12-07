#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;

int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	ll cnt=0;
	string s,s1,s2;
	while(cin>>s)
	{
		if (s==".") 
			break;
		cnt++;
		if (cnt==2)
			s1=s;
		if (cnt==14)
			s2=s;
	}
	if (cnt<2)
		cout<<"Momo... No one is for you ...\n";
	else if (cnt>=2&&cnt<14)
		cout<<s1<<" is the only one for you...\n";
	else 
		cout<<s1<<" and "<<s2<<" are inviting you to dinner...\n";
	return 0;
}



