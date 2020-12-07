#include<bits/stdc++.h>
using namespace std;

int main(){
	int a[50]={0},sum=0;
	int n,i,other=0;
	string s;
	cin>>n;
	cin>>s;
	for (i=0;i<s.size();i++)
	{
		if ('a'<=s[i]&&s[i]<=('a'+n))
			a[s[i]-'a']+=1;
		else if ('A'<=s[i]&&s[i]<=('A'+n))
			a[s[i]-'A']+=1;
	}
	for (i=0;i<n;i++)
	{
		printf("%c:",'A'+i);
		cout<<a[i]<<endl;
		sum+=a[i];
	}
	cout<<"OO:"<<s.size()-sum-1;
	return 0;
}
