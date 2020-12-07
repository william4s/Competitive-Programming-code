#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[100],b[100];
	char s1[100],s2[100];
	int i,j,k,x,t;
	long ans=0;
	scanf("%s%s",s1,s2);
	int l1,l2;
	l1=strlen(s1); l2=strlen(s2);
	for (i=0;i<l1;i++) a[i]=s1[i]-'0';
	for (i=0;i<l2;i++) b[i]=s2[i]-'0';
	for (i=0;i<l1;i++)
	  for (j=0;j<l2;j++)
	  ans+=a[i]*b[j];
	printf("%ld",ans);
	return 0;
} 
