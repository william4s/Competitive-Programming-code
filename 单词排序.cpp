#include<bits/stdc++.h>
using namespace std;
int main(){
	char s[150][55];
	int n,m,i,j,k;
	n=1;
	while (scanf("%s",s[n++])!=EOF);
	for (i=1;i<n;i++)
	  {
	  	for (j=i+1;j<n;j++)
	  	{
	  		if (strcmp(s[i],s[j])>0)
	  		    swap(s[i],s[j]);
		}
	  }
	for (i=0;i<n;i++)
	{
		if (strcmp(s[i],s[i-1])) 
		    printf("%s\n",s[i]);
	}
	return 0;
} 
