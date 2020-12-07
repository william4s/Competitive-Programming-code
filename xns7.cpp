#include<stdio.h>
#include<string.h>
int main(){
	char s[200],yy[10]={"aeiou"};
	int k,h,l,i,j,pd=0,f=0,y=0;
	gets(s);
	l=strlen(s);
	for (i=0;i<l;i++)
	{
		for (h=0;h<5;h++)
		{
			if (s[i]!=yy[h]) pd=1;
			else
			{
			pd=0;
			break;
		    }
		}
		if (pd) f++;
		else break;
	}
	//printf("f=%d %d ",f,i);
	if (f==0) 
	{
		printf("no");
		return 0;
	}
	f=0;
	
	for (j=i;j<l;j++)
	{
		for (h=0;h<5;h++)
		{
			pd=0;
			if (s[j]==yy[h]) 
			{
			pd=1;
			break;
		    }
		}
		if (pd) y++;
		else break;
	}
	//printf("y=%d %d",y,j);
	if (y==0) 
	{
		printf("no");
		return 0;
	}

    for (k=j;j<l;k++)
	{
		for (h=0;h<5;h++)
		{
			if (s[k]!=yy[h]) pd=1;
			else
			{
			pd=0;
			break;
		    }
		}
		if (pd) f++;
		else break;
	}
	//printf("f=%d %d ",f,k);
	if (f==0) 
	{
		printf("no");
		return 0;
	}
	f=0;
	for (h=0;h<5;h++)
	{
		pd=0;
		if (s[l-1]==yy[h])
		{
			pd=1;
			break;
		}
	}
	if (pd) printf("yes");
	else printf("no");
	
	return 0;
}
