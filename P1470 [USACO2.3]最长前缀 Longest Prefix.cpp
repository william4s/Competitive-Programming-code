#include<bits/stdc++.h>
using namespace std;

int main(){
	char s[1010],a[1010],t='1';
	int i=0;
	while(t!='.') 
	{
		t=getchar();
		s[i++]=t;
	}
	s[i-2]='\0';
	cin>>a;
	cout<<s<<endl;
	cout<<a;
	
	
	return 0;
} 
