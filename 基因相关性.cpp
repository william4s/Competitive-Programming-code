#include<bits/stdc++.h>
using namespace std;
int main(){
	char s1[590],s2[590];
	int t,l1,l2,i,j,s=0,p;
	double x,ans;
	scanf("%lf",&x);
	scanf("%s",s1);
	scanf("%s",s2);
	l1=strlen(s1);
	l2=strlen(s2);
	if (l1>l2) {
	t=l2;
	p=l1;
    }
	    else 
		  {
		  t=l1;
		  p=l2;
	      } 
	for (i=0;i<t;i++)
	 {
	 	if (s1[i]==s2[i]) s++;
	 }
	ans=s*1.0/p*1.0;
	if (ans>=x) printf("yes");
	else printf("no");
	return 0;
}
