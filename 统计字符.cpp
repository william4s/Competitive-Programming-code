#include<bits/stdc++.h>
using namespace std;
int main(){
	char x;
	int a[100]={0};
	int i;
	scanf("%c",&x);
	do
	{
		a[x-'a']+=1;
		scanf("%c",&x);
	}
	while(x!='#');
	for (i=0;i<26;i++)
	  if (a[i]) printf("%c:%d\n",'a'+i,a[i]);
	return 0;
}
