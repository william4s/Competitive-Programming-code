#include<stdio.h>
#include<string.h>
int main(){
	int i,j,k,l;
	char s[500],c;
	gets(s);
	l=strlen(s);
	if (s[0]>='a' && s[0]<='z')
	{   
	    c=s[0]-32;
		printf("%c",c);
	}
	else
	printf("%c",s[0]);
	
	for (i=1;i<l;i++)
	{
		if (s[i]>='A' && s[i]<='Z')
		{
		c=s[i]+32;
		putchar(c);
	    } 
		else
		printf("%c",s[i]); 
	}
	return 0;
}
