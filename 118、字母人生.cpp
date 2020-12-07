#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	long ans=0;
	getline(cin,s);
	for (int i=0;i<s.length();i++)
	{
		if (s[i]!=' ')
			ans+=(s[i]-'A'+1);
	}	
	cout<<ans;
	
	return 0;
}

