#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int r,ans=0;
	string s;
	cin>>r;
	cin>>s;
	for (int i=s.length()-1;i>=0;i--)
	{
		//cout<<s[i]<<endl;
		int t=1;
		for (int j=0;j<s.length()-1-i;j++)
			t*=r;
		if ('0'<=s[i]&&s[i]<='9')
			ans+=(s[i]-'0')*t; 
		else
			ans+=(s[i]-'A'+10)*t; 
	//	cout<<t<<endl;
		
	}
	cout<<ans;
	return 0;
} 
