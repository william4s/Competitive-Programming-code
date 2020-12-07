#include<bits/stdc++.h>
using namespace std;
string s;
int a[50];
int main(){
	long i,j,ans=0;
	cin>>s;
	for (i=0;i<s.size();i++)
	{
		a[s[i]-'0']++;
	}
	for (i=0;i<10;i++)
	{
		if (a[i])
		cout<<i<<":"<<a[i]<<endl;
	}
	return 0;
}

