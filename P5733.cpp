#include<bits/stdc++.h>
using namespace std;
int main(){
	char s[110];
	int i;
	scanf("%s",s);
	for (i=0;s[i]!='\0';i++)
	 if (s[i]>='a'&&s[i]<='z') s[i]=s[i]-('a'-'A');
	printf("%s",s);
	
	
	return 0;
} 
