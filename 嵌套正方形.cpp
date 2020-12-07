#include<bits/stdc++.h>
using namespace std;

int main(){
	int w,i,j,k;
	char s[220][220];
	cin>>w;
	for (i=w;i>=2;i=i-4)
	{
		for (j=1+(w-i)/2;j<=(w-i)/2+i;j++)//ÁÐ 
			{	
			s[1+(w-i)/2][j]='*';
			s[(w-i)/2+i][j]='*';
		    }
		for (k=1+(w-i)/2;k<=(w-i)/2+i;k++)//ÐÐ 
			{
				s[k][1+(w-i)/2]='*';
				s[k][(w-i)/2+i]='*';
			}
	
	}
	for (i=1;i<=w;i++)
	{
		for (j=1;j<=w;j++)
		cout<<s[i][j];
		cout<<endl;
    }
	return 0;
}
