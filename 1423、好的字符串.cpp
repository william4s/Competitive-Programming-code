#include<iostream>
#include<string>  
using namespace std;

int main(){
	int n,cnt=0;
	string s,ans="";
	cin>>n>>s;
	if (n==0)
	{
		cout<<0;
		return 0;
	}
	for (int i=0;i<n-1;i++)
	{
		if (i%2!=0&&s[i]!=s[i+1])
		{
			ans=ans+s[i]+s[i+1];
		}
		
	}
	cout<<n-ans.size();	
	return 0;
}
