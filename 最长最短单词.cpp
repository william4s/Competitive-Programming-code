#include<bits/stdc++.h>
using namespace std;
struct record
{
	int l;
	int b;
	int e;
};
int main(){
	char s[400];
	int t=0,l,i,j,pd=0;
	record max,min;
	max.l=0;
	min.l=500;
	gets(s);
	l=strlen(s);
	for (i=0;i<=l;i++)
	{
		if (s[i]!=' ' && i!=l &&  s[i]!=',')
		{
			t++;
		}
		else
		{
			pd++;
			if (t>max.l) 
			{
				max.l=t;
				max.e=i-1;
				max.b=i-t;
			}
			if (t<min.l)
			{
				min.l=t;
				min.e=i-1;
				min.b=i-t;
			}
			t=0;
		} 
	}
	if (pd)
	{
	for (i=max.b;i<=max.e;i++) printf("%c",s[i]);
	printf("\n");
	for (i=min.b;i<=min.e;i++) printf("%c",s[i]);
    }
    else
    {
    	printf("%s\n",s);
    	printf("%s",s);
	}
	return 0;
} 
