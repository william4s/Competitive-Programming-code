#include<bits/stdc++.h>
using namespace std;
int main(){
	char s1[300],s2[300];
	int l1,l2,pd=0,i,j,k,x,t;
	gets(s1);
	gets(s2);
	l1=strlen(s1);
	l2=strlen(s2);
	if (l1>l2) 
	{
    	j=0;
    	for (i=0;i<l1;i++)
    	  {
		    if (j==l2) break;
		    if (s2[j]==s1[i])
		    {
		     	j++;
		    	pd=1;
	    	}
	        else 
		    {
			    j=0;
			    pd=0;
		    }
    	 }
     	if (pd) printf("%s is substring of %s",s2,s1);
     	else printf("No substring");	
	}
	else if (l1<l2)
	{
	j=0;
	for (i=0;i<l2;i++)
	{
		if (j==l1) break;
		if (s2[i]==s1[j])
		{
			j++;
			pd=1;
		}
		else 
		{
			j=0;
			pd=0;
		}
	}
	if (pd) printf("%s is substring of %s",s1,s2);
	else printf("No substring");
    }
    else if (l1==l2) printf("No substring");
	
	return 0;
} 
