#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,l,i,j,k,t;
	char s[1000][500];
	scanf("%d",&n);
	getchar(); 
	for (i=0;i<n;i++)
	{
		gets(s[i]);
		l=strlen(s[i]);
		for (j=0;j<l;j++)
		{
			if (j==0) {
				if (s[i][j]>='a'&&s[i][j]<='z') s[i][j]-=32;
			}
			else if (s[i][j]>='A'&&s[i][j]<='Z') s[i][j]+=32;
		}
	}
	for (i=0;i<n;i++) 
	{
	puts(s[i]);
	}
	return 0;
}
