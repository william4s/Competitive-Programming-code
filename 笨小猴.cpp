#include<bits/stdc++.h>
using namespace std;
int fun(int x)
{
	int i;
	for (i=2;i*i<=x;i++)
		if (x%i==0) return 0;
return 1;
}
int main(){
	char s[200];
	int a[30]={0};
	scanf("%s",s);
	int l,i,j,k,max,min;
	l=strlen(s);
	for (i=0;i<l;i++)
	     a[s[i]-'a']+=1;
	max=INT_MIN;
	min=INT_MAX;
	for (i=0;i<30;i++)
	{
		if (a[i])
		{
			if (a[i]>max) max=a[i];
			if (a[i]<min) min=a[i];
		}
	}
	k=max-min;
	if (fun(k)&&k!=0&&k!=1) printf("Lucky Word\n%d",k);
	else printf("No Answer\n0");
	return 0;
}
