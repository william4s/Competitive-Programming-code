#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	int i,j,k,l;
	cin>>s;
	l=s.length();
	for (i=0;i<l;i++)
	{
		if ((s[i]+3)>'z') s[i]='a'+(s[i]+2-'z');
		else s[i]+=3;
	 } 
	cout<<s;
	return 0;
}
