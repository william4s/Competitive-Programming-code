#include<bits/stdc++.h>
using namespace std;
int len,n,ans,a[10][200200];
char s[200200];
int main()
{
	while (scanf("%d%s",&n,s+1)!=EOF)
	{
		memset(a,0,sizeof(a));
		ans=0;
		len=strlen(s+1);
		for (int i=1; i<=len; i++)
		{
			if (s[i]=='x') a[1][++a[1][0]]=i;
			if (s[i]=='t') a[2][++a[2][0]]=i;
			if (s[i]=='C') a[3][++a[3][0]]=i;
			if (s[i]=='p') a[4][++a[4][0]]=i;
			if (s[i]=='c') a[5][++a[5][0]]=i;
		}
		while (1)
		{
			bool flag=false;
			for (int i=1; i<=5; i++)
				if (a[i][0]==0)
				{
					flag=true;
					break;
				}
			if (flag==true) break;
			for (int i=4; i>=1; i--)
			{
				while (a[i][a[i][0]]>a[i+1][a[i+1][0]]&&a[i][0]!=0) a[i][0]--;
				if (a[i][0]==0) break;
			}
			for (int i=1; i<=5; i++)
				if (a[i][0]==0)
				{
					flag=true;
					break;
				}
			if (flag==true) break;
			for (int i=1; i<=5; i++) a[i][0]--;
			ans++;
		}
		printf("%d\n",ans);
	}
	return 0;
}

