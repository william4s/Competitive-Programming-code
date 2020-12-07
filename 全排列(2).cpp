#include<bits/stdc++.h>
using namespace std;
int a[20],n;
bool flag[20];
char s[20];
void sc(int t)
{
	if (t>n)
	{
		for (int i=1; i<n; i++) printf("%d ",a[i]);
		printf("%d\n",a[n]);
	}
	else for (int i=1; i<=n; i++)
			if (flag[i]==false)
				flag[i]=true,a[t]=i,sc(t+1),flag[i]=false;
}
int main()
{
	scanf("%s",s+1),n=strlen(s+1);
	sc(1);
	return 0;
}

