#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	char map[550][30];
	int a[30]={0};
	getline(cin,s);
	int len;
	len=s.length();
	for (int i=0;i<len;i++)
	{
		a[s[i]-'A']+=1;
	}
	int max=-1;
	for (int i=0;i<26;i++)
		if (max<a[i]) max=a[i];
	for (int i=0;i<26;i++)
	{
		for (int j=max-1;j>max-1-a[i];j--)
		map[j][i]='*';
	}
	for (int i=0;i<max;i++)
	{
		for (int j=0;j<26;j++)
			if (map[i][j]=='*') cout<<map[i][j]<<' ';
			else cout<<' '<<' ';
		if (i!=max) cout<<endl;	
	}
	for (int i=0;i<26;i++) printf("%c%c",i+'A',' ');
	return 0;
}
