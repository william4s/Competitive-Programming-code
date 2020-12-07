#include<bits/stdc++.h>
using namespace std;
char s[50];
int n,k;           //0123
int dod(int l,int r)    //5128
{
	int i;
	long ans=0;
	for (i=l;i<r;i++)
	{
		ans=ans*10+s[i]-'0';
	}
	return ans;
}

int main(){
	int l,i;
	long a1,a2,max=-1,sum=0;

	cin>>n>>k;
	cin>>s;
	l=strlen(s);
	for (i=0;i<l;i++)
	{
		a1=dod(0,i);
		a2=dod(i,n);
		sum=a1*a2;
		if (sum>max) max=sum;
	}
	cout<<max;
	return 0;
}
