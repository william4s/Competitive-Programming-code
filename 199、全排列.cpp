#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void swap(char *a,char *b)
{
	char temp=*a;
	*a=*b;
	*b=temp;
}
void p(string &s,ll a,ll b)
{
	if (a==b)
	{
		for(ll i=0;i<=b;i++)
			cout<<s[i];
		cout<<"\n";
	}
	else
	{
		for(ll i=a;i<=b;i++)
		{
			swap(&s[a],&s[i]);
			p(s,a+1,b);
			swap(&s[a],&s[i]);
		}
	}
}
int main(){
	string s;
	cin>>s;
	p(s,0,s.size()-1);	
		
	return 0;
}

