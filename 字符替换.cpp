#include<bits/stdc++.h>
using namespace std;
int main(){
	char s[1000],x,y;
	int i,j,l;
	gets(s);
	l=strlen(s);
	x=s[l-3];
	y=s[l-1];
	for (i=0;i<l-4;i++)
	{
		if (s[i]==x) s[i]=y;
	}
	s[i]='\0';
	printf("%s",s);
	return 0;
}
