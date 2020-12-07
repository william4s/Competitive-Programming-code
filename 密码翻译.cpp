#include<bits/stdc++.h>
using namespace std;
int main(){  //Z:90 z:122
	char s[2000];
	int l,i,j;
	gets(s);
	l=strlen(s);
	for (i=0;i<l;i++)
	{
		if (s[i]>='a'&&s[i]<'z') 
			s[i]=s[i]+1;
		else if (s[i]=='z') s[i]='a';
		else if (s[i]>='A'&&s[i]<'Z')
		    s[i]=s[i]+1;
		else if (s[i]=='Z') s[i]='A';
	}
	printf("%s",s);
	
	
	return 0;
} 
