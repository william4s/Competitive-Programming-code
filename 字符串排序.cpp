#include<bits/stdc++.h>
using namespace std;
int main(){
	char s[200];
	gets(s);
	int l,i,j;
	l=strlen(s);
	sort(s,s+l);
	puts(s);
	return 0;
}
