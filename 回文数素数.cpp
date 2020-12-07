#include<bits/stdc++.h>
using namespace std;
int fun(long x)
{
	long i;
	for (i=2;i*i<=x;i++)
	if (x%i==0) return 0;
return 1;
}
int main(){
	long n,x,i,j,k,t,l,pd,ans=0;
	char s[500][200];
	scanf("%ld",&n);
	for (i=0;i<n;i++) 
	    scanf("%s",s[i]);
	for (i=0;i<n;i++)
	{

		l=strlen(s[i]);
		pd=0;
		if (l>=2){
		
		    for (j=0;j<l/2;j++)
	     	{
		 	if (s[i][j]==s[i][l-j-1]) pd=1;
			else {
				  pd=0;
			     }
			}
			if (pd==1) 
			  {
			  	x=atoi(s[i]);
			  	if (fun(x)) ans++;
			  }  
	    }
	    else if (fun(atoi(s[i]))) ans++;
	   
	}
	printf("%ld",ans);
	return 0;
} 
